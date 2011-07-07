#ifndef MAINWINDOW_H
#define MAINWINDOW_H
 
#include <Qt>
#include <QMainWindow>
#include <string>
#include "UiVariables.h"
//#include "MainPanel.h"

//prototypes:
class AbstractGraph;
class FastaReader;
class GtfReader;
class GLWidget;
class QAction;
class QLabel;
class QActionGroup;
class QDockWidget;
class QTextEdit;
class QLineEdit;
class QSpinBox;
class QComboBox;
class QPushButton;
class QProgressBar;
class QScrollArea;
class QScrollBar;
class QFrame;
class QTabWidget;
class QCheckBox;
class ViewManager;

class MainWindow : public QMainWindow {
    
friend class ViewManager;

		Q_OBJECT
public:
	QFrame* glHandler;
    FastaReader* fastaReader;
    GtfReader* trackReader;
	MainWindow();
    
    const QString defaultTitle = "Skittle Genome Visualizer";
    const QString titleSeperator = " - ";

public slots:
    void setWindowTitle();
    void setWindowTitle(const Qstring &newTitle);
    void setWindowTitle(const Qstring &newTitle, const QString &seperator);
	void removeButton(QAction* presetAction);
	void open();
	void open(QString fileName);
	void updateProgress(int);
	void updateState(QString);
	void updateStatus(QString);
	void changeWindowName(std::string name);
	void openGtf();
    void changeWidth(int newWidth);
    void changeWidth();
	void changeScale(int newScale);
    void changeScale();
	void doubleWidth();
	void halveWidth();
	void addDisplayActions(AbstractGraph*);
	void addDisplayDivider();
	void helpDialog();
    void showOffset(Qt::CheckState);
	
	//testing:
	void reportFinished();
	
signals:
	void newFileOpen(QString name);
	void newGtfFileOpen(QString name);
	
	
protected:
	void closeEvent(QCloseEvent *event);
	
private:
	void createActions();
	void createMenus();
	void createDocks();
	void createContextMenus();
	void createToolbars();
	void createStatusBar();
	void createUiConnections();
	void createFileConnections();
	UiVariables* getDisplayVariables();
	bool loadfile(const QString &filename);
	void readSettings();
	void writeSettings();
	void print(const char* str);
    void print(QString);
	
	ViewManager* viewManager;
	QMenu *annotationMenu;
	QMenu *fileMenu;
	QMenu *presetMenu;
	QMenu *searchMenu;
	QMenu *toolMenu;
	QMenu *viewMenu;
	QMenu *toolBarMenu;
	
	QActionGroup *toolActionGroup;
	
	QToolBar *annotationToolBar;
	QToolBar *presetToolBar;
	QToolBar *toolToolBar;
	QToolBar *settingToolBar;
	
	QDockWidget *infoDock;
	QTextEdit* textArea;
    QTabWidget *tabWidget;
	
	QSpinBox *widthDial;
	QPushButton *doubleDisplayWidth;
	QPushButton *halveDisplayWidth;
	QSpinBox *scale;
	QSpinBox* zoom;
	QSpinBox *startOffset;
	QSpinBox *displayLength;
    QLabel *offsetLabel;
    QSpinBox *viewOffset;
	QCheckBox* syncCheckBox;
	QPushButton* changeSettings;
    UiVariables* constraints;
	
	QAction *moveAction;
	QAction *resizeAction;
	QAction *zoomAction;
	QAction *selectAction;
	QAction *findAction;
	QAction *useTexturesAction;
	QAction *addAnnotationAction;
	QAction *nextAnnotationAction;
	QAction *prevAnnotationAction;
	QAction *browseCommunityAction;
	QAction *delAnnotationAction;
	QAction *findSequenceAction;
	QAction *findNextAction;
	QAction *findPrevAction;
	QAction *hilightResultsAction;
	QAction *addViewAction;
	QAction *openAction;
	QAction *importAction;
	QAction *exitAction;
	QAction *helpAction;
	QAction *aboutQtAct;
	
	QLabel *statusTip;
	//QProgressBar *processStatus;
	//QLabel *processState;
	int oldScale;
    int oldWidth;
	
};

#endif

