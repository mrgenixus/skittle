//ViewManager.cpp
#include "ViewManager.h"
#include "glwidget.h"
#include "HighlightDisplay.h"
#include "GtfReader.h"
#include "MainWindow.h"
#include "MdiChildWindow.h"
#include <QtGui/QScrollBar>
#include <algorithm>

/************************************************************
 * Defualt Constructor (ViewManager)
 * 
 * MainWindow* window: A Pointer to the master/parent interface Window
 * UiVariables* gui: A pointer to the constraining controls which configure the OpenGL Visualizer
 ***********************************************************/

ViewManager::ViewManager(MainWindow* window, UiVariables* gui)
	: QMdiArea(window)
{
    ui = gui;
	mainWindow = window;
	activeWidget = NULL;
	
	setBackgroundRole(QPalette::Dark);

	createConnections();
	
	addNewView();
	views[0]->showMaximized();
}

void ViewManager::createConnections()
{	
    //this is called directly by UiVariables:
    
	//~ connect(ui->widthDial, SIGNAL(editingFinished()), this, SLOT(updateCurrentDisplay()));	
    //~ connect(ui->zoomDial,  SIGNAL(editingFinished()), this, SLOT(updateCurrentDisplay()));
	//~ connect(ui->scaleDial, SIGNAL(editingFinished()), this, SLOT(updateCurrentDisplay()));
	//~ connect(ui->startDial, SIGNAL(editingFinished()), this, SLOT(updateCurrentDisplay()));
	//~ connect(ui->sizeDial,  SIGNAL(editingFinished()), this, SLOT(updateCurrentDisplay()));
    
}

void ViewManager::uiToGlwidgetConnections(GLWidget* active)
{
    
	connect(active->parent, SIGNAL(clicked(MdiChildWindow*)), this, SLOT(changeSelection(MdiChildWindow*)));
        
    //this should really be handled by a static connection to UI; -- i.e. UI should save the state of the cursor selection;
    connect(mainWindow->moveAction, SIGNAL(triggered()), active, SLOT(on_moveButton_clicked()));
    connect(mainWindow->selectAction, SIGNAL(triggered()), active, SLOT(on_selectButton_clicked()));
    connect(mainWindow->findAction, SIGNAL(triggered()), active, SLOT(on_findButton_clicked()));
    connect(mainWindow->resizeAction, SIGNAL(triggered()), active, SLOT(on_resizeButton_clicked()));
    connect(mainWindow->zoomAction, SIGNAL(triggered()), active, SLOT(on_zoomButton_clicked()));
	
	connect( active, SIGNAL(addGraphMode(AbstractGraph*)), mainWindow, SLOT(addDisplayActions(AbstractGraph*)));
	
	connect( active, SIGNAL(addDivider()), mainWindow, SLOT(addDisplayDivider()));
	active->createButtons();

}

//public slots
GLWidget* ViewManager::addNewView(bool suppressOpen)
{
    UiVariables* localDials;
	if (mainWindow->syncCheckBox->isChecked()) {
        localDials = ui;
    }
    else {
        localDials = copyUi();
        broadcastPublicValues(localDials);
    }
	MdiChildWindow* child = new MdiChildWindow(localDials, ui->startDial, mainWindow->tabWidget);//TODO: figure out a better way to manage startDial
	connect( child, SIGNAL(subWindowClosing(MdiChildWindow*)), this, SLOT(closeSubWindow(MdiChildWindow*)));
    addSubWindow(child);
    child->show();
    views.push_back(child);
	
	uiToGlwidgetConnections(child->glWidget);
	connectVariables(child->glWidget);
	
	changeSelection(child);
	if(suppressOpen == false)
		mainWindow->openAction->trigger();
	return child->glWidget;
}

void ViewManager::changeSelection(MdiChildWindow* parent)
{
	GLWidget* current = parent->glWidget;
	if(current == activeWidget)
		return;
		
	int tabIndex = mainWindow->tabWidget->currentIndex();
	if(activeWidget != NULL)
	{
		if(mainWindow->syncCheckBox->isChecked() == false )
		{
			disconnectVariables(activeWidget);
			connectVariables(current);
		}
		parent->hideSettingsTabs();
	}
	
	parent->showSettingsTabs();
	mainWindow->tabWidget->setCurrentIndex(tabIndex);
		
	activeWidget = current;		
	activeWidget->setTotalDisplayWidth();	
}

void ViewManager::closeSubWindow(MdiChildWindow* closing)
{
	vector<MdiChildWindow*>::iterator it;
	it = std::find(views.begin(), views.end(), closing);
	views.erase(it);
	if(closing->glWidget == activeWidget)
	{
		if( views.size() > 0)
			changeSelection(views[0]);
		else
			activeWidget = NULL;
	}
}

void ViewManager::changeFile(QString fileName)
{
	if(!fileName.isEmpty() )
	{
		if(activeWidget == NULL )
		{
			addNewView(true);
		}
		activeWidget->loadFile(fileName);
		activeWidget->trackReader->determineOutputFile(fileName);
	}
}

void ViewManager::addAnnotationDisplay(QString fileName) {
    
	if(activeWidget != NULL) activeWidget->addAnnotationDisplay(fileName);
}

void ViewManager::addBookmark() {
    
	if(activeWidget != NULL) activeWidget->trackReader->addBookmark();
}

void ViewManager::handleWindowSync()
{
    for(int i = 0; i < (int)views.size(); ++i) {
        if(views[i]->glWidget != activeWidget) {
            //the respective bodies of the following functions need to be reviewed, and 
            //rewritten, given the changes to the way UiVariables is being handled:
            
            if( mainWindow->syncCheckBox->isChecked()) connectVariables(views[i]->glWidget);
            else disconnectVariables(views[i]->glWidget);
        }
    }
}

void ViewManager::changePublicStart(int val)
{
	//local.start changes
	int set = max(0, val - activeWidget->ui->offsetDial->value());
	ui->startDial->setValue(set);
	//ui->print("changePublicStart: ", set);	
}

//PRIVATE FUNCTIONS//
void ViewManager::broadcastLocalValues(UiVariables* local)
{
	ui->startDial->setValue(local->startDial->value());
	
	ui->sizeDial->setValue(local->sizeDial->value());
	ui->widthDial->setValue(local->widthDial->value());
	ui->scaleDial->setValue(local->scaleDial->value());
	ui->zoomDial->setValue(local->zoomDial->value());
}

void ViewManager::broadcastPublicValues(UiVariables* local)
{
	local->startDial->setValue(ui->startDial->value());
	
	local->sizeDial->setValue(ui->sizeDial->value());
	local->widthDial->setValue(ui->widthDial->value());
	local->scaleDial->setValue(ui->scaleDial->value());
	local->zoomDial->setValue(ui->zoomDial->value());
}

UiVariables* ViewManager::copyUi()
{
    /****************************************************************************************
     * 
     * Code Moved to UiVariables::UiVariables(Textarea* text,bool NullInstance)
     * 
     ***************************************************************************************/    
	return new UiVariables(ui->textArea,false); //localDials;
}

void ViewManager::printNum(int num)
{
	ui->print("Global:  ", num);
}

void ViewManager::printNum2(int num)
{
	ui->print("Local:   ", num);
}

//the mother load!
//implement in glWidget
void ViewManager::connectVariables(GLWidget* active)
{
    UiVariables* local = active->ui;
	connect(local->sizeDial	, SIGNAL(valueChanged(int)), ui->sizeDial	, SLOT(setValue(int)));
	//connect(ui->sizeDial		, SIGNAL(valueChanged(int)), local->sizeDial	, SLOT(setValue(int)));

	connect(local->widthDial	, SIGNAL(valueChanged(int)), ui->widthDial	, SLOT(setValue(int)));
	connect(ui->widthDial	, SIGNAL(valueChanged(int)), local->widthDial, SLOT(setValue(int)));

	//OLD:widget -> local->start -> pub.start
	//NEW:widget -> local->start -> vMan.slots -> pub.start
	//connect(local->startDial	, SIGNAL(valueChanged(int)), ui->startDial	, SLOT(setValue(int)));
	connect(local->startDial , SIGNAL(valueChanged(int)), this, SLOT(changePublicStart(int)));
	connect(ui->startDial	, SIGNAL(valueChanged(int)), 
		dynamic_cast<MdiChildWindow*>(active->parent), SLOT(changeLocalStartFromPublicStart(int)));
	//connect(this, SIGNAL(startChangeFromPublicStart(int)), local->startDial, SLOT(setValue(int)));	

	connect(local->scaleDial	, SIGNAL(valueChanged(int)), ui->scaleDial	, SLOT(setValue(int)));
	connect(ui->scaleDial	, SIGNAL(valueChanged(int)), local->scaleDial, SLOT(setValue(int)));
	connect(active,           SIGNAL(scaleChanged(int)), local->scaleDial,    SLOT(setValue(int)));

	connect(local->zoomDial	, SIGNAL(valueChanged(int)), ui->zoomDial	, SLOT(setValue(int)));
	connect(ui->zoomDial		, SIGNAL(valueChanged(int)), local->zoomDial	, SLOT(setValue(int)));
    connect(active, SIGNAL(scaleChangedSmart(int)), this, SLOT(scaleChangedSmart(int)));
}

void ViewManager::disconnectVariables(GLWidget* active)
{
    UiVariables* local = active->ui;
    
	disconnect(local->sizeDial	, SIGNAL(valueChanged(int)), ui->sizeDial	, SLOT(setValue(int)));
	disconnect(ui->sizeDial		, SIGNAL(valueChanged(int)), local->sizeDial	, SLOT(setValue(int)));

	disconnect(local->widthDial	, SIGNAL(valueChanged(int)), ui->widthDial	, SLOT(setValue(int)));
	disconnect(ui->widthDial	, SIGNAL(valueChanged(int)), local->widthDial, SLOT(setValue(int)));

	disconnect(local->startDial , SIGNAL(valueChanged(int)), this, SLOT(changePublicStart(int)));
	disconnect(ui->startDial	, SIGNAL(valueChanged(int)), 
		dynamic_cast<MdiChildWindow*>(active->parent), SLOT(changeLocalStartFromPublicStart(int)));
	//disconnect(this, SIGNAL(startChangeFromPublicStart(int)), local->startDial, SLOT(setValue(int)));	
	
	//disconnect(local->offsetDial, SIGNAL(valueChanged(int)), this, SLOT(changeLocalStart(int)));

	disconnect(local->scaleDial	, SIGNAL(valueChanged(int)), ui->scaleDial	, SLOT(setValue(int)));
	disconnect(ui->scaleDial	, SIGNAL(valueChanged(int)), local->scaleDial, SLOT(setValue(int)));

	disconnect(local->zoomDial	, SIGNAL(valueChanged(int)), ui->zoomDial	, SLOT(setValue(int)));
	disconnect(ui->zoomDial		, SIGNAL(valueChanged(int)), local->zoomDial	, SLOT(setValue(int)));
}
void ViewManager::updateCurrentDisplay(){
	//activeWidget->reportOnFinish();
	
	if (mainWindow->syncCheckBox->isChecked()){
		
		for(int i = 0; i < (int)views.size(); ++i) {
			views[i]->glWidget->updateDisplay();
		}
	}
	else {
		activeWidget->updateDisplay();
	}
}

void ViewManager::scaleChangedSmart(int newScale){
    mainWindow->changeScale(newScale);
}
