#include <QtGui/QTextEdit>
#include <QtGui/QSpinBox>
#include <QString>
#include <sstream>
#include "UiVariables.h"

UiVariables::UiVariables()
{
        textArea = NULL;
        sizeDial = NULL;
        widthDial = NULL;
        startDial = NULL;
        scaleDial = NULL;
        zoomDial = NULL;
        offsetDial = NULL;
}

UiVariables::UiVariables(QTextEdit* text,bool nullInstance) {
    
	textArea = text;
	textArea->toPlainText();
    if(nullInstance){
        sizeDial = NULL;
        widthDial = NULL;
        startDial = NULL;
        scaleDial = NULL;
        zoomDial = NULL;
        offsetDial = NULL;
    } else { 
        widthDial = new QSpinBox();//this);
        widthDial->hide();
        
        scaleDial = new QSpinBox();//this);
        scaleDial->hide();
        
        zoomDial = new QSpinBox();//this);
        zoomDial->hide();
        
        QSpinBox* startDial = new QSpinBox();//this);
        startDial->hide();
        
        sizeDial = new QSpinBox();//this);
        sizeDial->hide();

        offsetDial = new QSpinBox();//this);
        offsetDial->hide();
    }
}

//{ // copy constructor Private in Parent (QObject)
//~ UiVariables::UiVariables(const UiVariables& copy)
//~ {
	//~ textArea  = copy.textArea;
    //~ sizeDial  = copy.sizeDial;
    //~ widthDial = copy.widthDial;
    //~ startDial = copy.startDial;
    //~ scaleDial = copy.scaleDial;
    //~ zoomDial  = copy.zoomDial;
    //~ offsetDial= copy.offsetDial;
//~ }
//~ UiVariables::UiVariables(const UiVariables* copy){
    
    //~ textArea  = copy->textArea;
    //~ sizeDial  = copy->sizeDial;
    //~ widthDial = copy->widthDial;
    //~ startDial = copy->startDial;
    //~ scaleDial = copy->scaleDial;
    //~ zoomDial  = copy->zoomDial;
    //~ offsetDial= copy->offsetDial;
//~ }
//}

void UiVariables::print(char const * s) {
	if(textArea != NULL)
	{
		QString name(s);
		textArea->append(name);	
	}
}

void UiVariables::print(std::string s) {
	textArea->append(QString(s.c_str()));	
}

void UiVariables::printHtml(std::string s) {
	if(textArea != NULL)
		textArea->insertHtml(QString(s.c_str()));
}

void UiVariables::print(const char* s, int num) {
	std::stringstream ss1;
	ss1 << s << num;

	textArea->append(QString( ss1.str().c_str() ));	
}

void UiVariables::printNum(int num) {
	std::stringstream ss1;
	ss1 << num;

	textArea->append(QString( ss1.str().c_str() ));	
}

void UiVariables::print(QString str) {
    textArea->append(str);
    
}

void UiVariables::updateDisplay(){
    emit DisplayChanged(this);
}

void UiVariables::createConnections(){
    connect(widthDial, SIGNAL(editingFinished()), this, SLOT(updateDisplay()));	
    connect(zoomDial,  SIGNAL(editingFinished()), this, SLOT(updateDisplay()));
	connect(scaleDial, SIGNAL(editingFinished()), this, SLOT(updateDisplay()));
	connect(startDial, SIGNAL(editingFinished()), this, SLOT(updateDisplay()));
	connect(sizeDial,  SIGNAL(editingFinished()), this, SLOT(updateDisplay()));
}
