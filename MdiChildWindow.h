#ifndef MDI_CHILD_SKITTLE
#define MDI_CHILD_SKITTLE

#include <QtCore>
#include <QMdiArea>
#include <QFrame>
#include <vector>
#include "UiVariables.h"

class GLWidget;
class MainWindow;
class QHBoxLayout;
class QTabWidget;
class QFrame;
class QScrollArea;

using std::vector;

class MdiChildWindow : public QFrame
{
	Q_OBJECT

public:


	GLWidget* glWidget;
	
	//MdiChildWindow(UiVariables* gui, QSpinBox* pStart, QTabWidget* settings);
    //Eruh? : //MdiChildWindow(UiVariables* gui, QSpinBox* pStart, QTabWidget* settings, QWidget* parent = 0, Qt::WindowFlags f = 0);
    MdiChildWindow(UiVariables* gui, QTabWidget* settings, QWidget* parent = 0, Qt::WindowFlags f = 0);
	void closeEvent(QCloseEvent *event);
	//createConnections();
	void hideSettingsTabs();
	void showSettingsTabs();
	void mousePressEvent(QMouseEvent *event);
	
public slots:
	void changeLocalStartFromPublicStart(int val);
	void changeLocalStartFromOffset(int val);
	void setHorizontalWidth(int val);
	void setOffsetStep(int val);
	void setPageSize();
	void hideSettingsTab(QScrollArea*);
	void showSettingsTab(QScrollArea*);

signals:
	void subWindowClosing(MdiChildWindow*);
	void clicked(MdiChildWindow*);

private:

	QScrollBar* horizontalScrollBar;
	QScrollBar* verticalScrollBar;
    QFrame* subFrame;
	int publicStart;
	QTabWidget* settingsDock;
	vector<QScrollArea*> settingsTabs;
    
	void createSettingsTabs();
    void setupLayout();
    void connectWidget();
};	
#endif
