#include "MdiChildWindow.h"
#include "glwidget.h"
#include <QtGui/QTabWidget>
#include "HighlightDisplay.h"  //TODO: remove dependency
#include <algorithm>

using std::find;

MdiChildWindow::MdiChildWindow(UiVariables* gui, QTabWidget* settings, QWidget* parent, Qt::WindowFlags f)
	: QFrame(parent,f)
{
    publicStart = gui->getStart();
	settingsDock = settings;
    setWindowTitle("Skittle Logo"); //?
    
    glWidget = new GLWidget(gui, this);
    
	setMouseTracking(true);//are you sure?
	
    //scrollArea->setWidget(glWidget);//glWidget);
    setAttribute(Qt::WA_DeleteOnClose);
    
	/**/
	createSettingsTabs();
    setupLayout();
	connectWidget();
	setPageSize();
    
}
void MdiChildWindow::setupLayout(){
    
    horizontalScrollBar = new QScrollBar();
	horizontalScrollBar->setOrientation(Qt::Horizontal);
    horizontalScrollBar->setMaximum (50);
    horizontalScrollBar->setPageStep(100);
    horizontalScrollBar->setSingleStep(10);
	verticalScrollBar = new QScrollBar();
	verticalScrollBar->setMaximum( 100 );
    
    subFrame = new QFrame(this);
	QHBoxLayout* hLayout = new QHBoxLayout(subFrame);
	hLayout->addWidget(glWidget);
	hLayout->addWidget(verticalScrollBar);
	QVBoxLayout* vLayout = new QVBoxLayout(this);
	vLayout->addWidget(subFrame);
	vLayout->addWidget(horizontalScrollBar);
    
    /**Scrollbars**/
	connect(glWidget, SIGNAL(displaySizeChanged()), this, SLOT(setPageSize()));
	connect(verticalScrollBar, SIGNAL(valueChanged(int)), glWidget->ui, SLOT(setStart(int)));
	connect(verticalScrollBar, SIGNAL(sliderReleased()), glWidget->ui, SLOT(updateDisplay()));
	connect(glWidget->ui, SIGNAL(startChanged(int)), verticalScrollBar, SLOT(setValue(int)));
}

void MdiChildWindow::changeLocalStartFromPublicStart(int val)
{
	int start = val;
	int offset = glWidget->ui->getOffset();
	
	glWidget->ui->setStart((int)max(0, start + offset));
}

void MdiChildWindow::changeLocalStartFromOffset(int val)
{
    //move to ui
	int start = publicStart;
	int offset = glWidget->ui->getOffset();
	glWidget->ui->setStart((int)max(0, start + offset));
}

void MdiChildWindow::closeEvent(QCloseEvent *event)
{
	//QScrollBar* horizontalScrollBar;
	//QScrollBar* verticalScrollBar;
	//QFrame* subFrame;
	emit subWindowClosing(this);
    
    //shouldn't this stuff be in the destructor? .. and use QObject::deleteLater()?
	delete glWidget;	
	//delete glWidget->ui->offsetDial;//->hide();
	for(int i = 0; i < (int)settingsTabs.size(); ++i)
		delete settingsTabs[i];
	event->accept();
}

void MdiChildWindow::connectWidget() {
	connect(horizontalScrollBar, SIGNAL(valueChanged(int)), glWidget, SLOT(slideHorizontal(int)));
	connect(glWidget, SIGNAL(xOffsetChange(int)), horizontalScrollBar, SLOT(setValue(int)));
	connect(glWidget, SIGNAL(totalWidthChanged(int)), this, SLOT(setHorizontalWidth(int)));
    
    //move to ui:
	connect(glWidget->ui->getWidthDial, SIGNAL(valueChanged(int)), this, SLOT(setOffsetStep(int)));
	connect(glWidget->ui->getOffsetDial, SIGNAL(valueChanged(int)), this, SLOT(changeLocalStartFromOffset(int)));
}

void MdiChildWindow::setHorizontalWidth(int val) {
    
	horizontalScrollBar->setMaximum( max(0, val) );
}

void MdiChildWindow::setOffsetStep(int val) {
    //move to ui.
	glWidget->ui->getOffsetDial()->setSingleStep(val);
}

void MdiChildWindow::setPageSize() {
	if( glWidget != NULL) verticalScrollBar->setMaximum( max(0, (int)(glWidget->seq()->size() - glWidget->ui->getWidth()) ) );
	verticalScrollBar->setPageStep(glWidget->ui->getSize());
}

void MdiChildWindow::createSettingsTabs()
{
	//settingsTabs = glWidget->settingsUi());
	connect( glWidget, SIGNAL(hideSettings(QScrollArea*)), this, SLOT(hideSettingsTab(QScrollArea*)));
	connect( glWidget, SIGNAL(showSettings(QScrollArea*)), this, SLOT(showSettingsTab(QScrollArea*)));
}

//NOTE: The plural and singular forms of (hide/show)SettingsTab(s) are similar but not identical in where they get the pointer
void MdiChildWindow::hideSettingsTab(QScrollArea* tab)
{
	int index = settingsDock->indexOf(tab);
	if(index > -1) {
		settingsDock->removeTab(index); 
		vector<QScrollArea*>::iterator it;
		it = std::find(settingsTabs.begin(), settingsTabs.end(), tab);
		settingsTabs.erase(it);
	}
}


void MdiChildWindow::hideSettingsTabs()
{
	for(int i = 0; i < (int)settingsTabs.size(); ++i)
	{
		int index = settingsDock->indexOf(settingsTabs[i]);
		if(index > -1) //??
			settingsDock->removeTab(index);
		//settingsTabs[i]->removeTab(1);
	}
}

void MdiChildWindow::showSettingsTab(QScrollArea* tab)
{
	settingsTabs.push_back(tab);
	settingsDock->insertTab(1, tab, tab->windowTitle());
}
void MdiChildWindow::showSettingsTabs() {
	for(int i = 0; i < (int)settingsTabs.size(); ++i) {
		settingsDock->insertTab(1, settingsTabs[i], settingsTabs[i]->windowTitle());
		//settingsTabs[i]->insertTab(1);
        
	}
}

void MdiChildWindow::mousePressEvent(QMouseEvent *event) {
	emit clicked(this);
	QFrame::mousePressEvent(event);
}

