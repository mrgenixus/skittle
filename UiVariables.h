#ifndef JUI_VARS1234
#define JUI_VARS1234

#include <string>
#include <QObject>

class QTextEdit;
class QSpinBox;

class UiVariables : public QObject
{
	Q_OBJECT
		
public:

	UiVariables();
	UiVariables(QTextEdit*,bool nullInstance = true);
	//UiVariables(const UiVariables& copy);
    //UiVariables(const UiVariables* copy);
    copyValues(const UiVariables* );

public slots:
	void print(const char*);
	void print(std::string s);
	void printHtml(std::string);
	void print(const char* s, int num);
	void printNum(int num);
    void print(QString str);
    void updateDisplay();
	//void print(int num1, int num2); 
    
    
    void setSizeDial(QSpinBox*);
    QSpinBox* getSizeDial();
    void setSize(int);
    int getSize();
    
    void setWidthDial(QSpinBox*);
    QSpinBox* getWidthDial();
    void setWidth(int);
    int getWidth();
    
    void setStartDial(QSpinBox*);
    QSpinBox* getStartDial();
    void setStart(int);
    int getStart();
    
    void setScaleDial(QSpinBox* );
    QSpinBox* getScaleDial();
    void setScale(int);
    int getScale();
    
    void setZoomDial(QSpinBox* );
    QSpinBox* getZoomDial();
    void setZoom(int);
    int getZoom();
    
    void setOffsetDial(QSpinBox* );
    QSpinBox* getOffsetDial();
    void setOffset(int);
    int getOffset();
    
    void setTextArea(QTextEdit*);
    QString getOutput();
    
signals:
    void StateChanged(UiVariables*);
    void sizeChanged(int);
    void widthChanged(int);
    void startChanged(int);
    void scaleChanged(int);
    void zoomChanged(int);
    void offsetChanged(int);
    void textPrinted(QString);
    
private:
    void createConnections();

    QSpinBox* sizeDial;
    QSpinBox* widthDial;
    QSpinBox* startDial;
    QSpinBox* scaleDial;
    QSpinBox* zoomDial;
    QSpinBox* offsetDial;
	QTextEdit* textArea;

};
#endif
