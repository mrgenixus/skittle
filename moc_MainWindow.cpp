/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Sun Aug 7 22:19:46 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MainWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MainWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x05,
      38,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      62,   11,   11,   11, 0x0a,
      88,   79,   11,   11, 0x0a,
     131,  112,   11,   11, 0x0a,
     176,  163,   11,   11, 0x0a,
     199,   11,   11,   11, 0x0a,
     215,  206,   11,   11, 0x0a,
     229,   11,   11,   11, 0x0a,
     249,   11,   11,   11, 0x0a,
     270,   11,   11,   11, 0x0a,
     292,   12,   11,   11, 0x0a,
     322,   11,   11,   11, 0x0a,
     341,  332,   11,   11, 0x0a,
     358,   11,   11,   11, 0x0a,
     381,  372,   11,   11, 0x0a,
     398,   11,   11,   11, 0x0a,
     412,   11,   11,   11, 0x0a,
     426,   11,   11,   11, 0x0a,
     439,   11,   11,   11, 0x0a,
     473,   11,   11,   11, 0x0a,
     493,   11,   11,   11, 0x0a,
     506,   11,   11,   11, 0x0a,
     533,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0name\0newFileOpen(QString)\0"
    "newGtfFileOpen(QString)\0setWindowTitle()\0"
    "newTitle\0setWindowTitle(QString)\0"
    "newTitle,seperator\0setWindowTitle(QString,QString)\0"
    "presetAction\0removeButton(QAction*)\0"
    "open()\0fileName\0open(QString)\0"
    "updateProgress(int)\0updateState(QString)\0"
    "updateStatus(QString)\0"
    "changeWindowName(std::string)\0openGtf()\0"
    "newWidth\0changeWidth(int)\0changeWidth()\0"
    "newScale\0changeScale(int)\0changeScale()\0"
    "doubleWidth()\0halveWidth()\0"
    "addDisplayActions(AbstractGraph*)\0"
    "addDisplayDivider()\0helpDialog()\0"
    "showOffset(Qt::CheckState)\0reportFinished()\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newFileOpen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: newGtfFileOpen((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: setWindowTitle(); break;
        case 3: setWindowTitle((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: setWindowTitle((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: removeButton((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 6: open(); break;
        case 7: open((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: updateState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 10: updateStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: changeWindowName((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 12: openGtf(); break;
        case 13: changeWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 14: changeWidth(); break;
        case 15: changeScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 16: changeScale(); break;
        case 17: doubleWidth(); break;
        case 18: halveWidth(); break;
        case 19: addDisplayActions((*reinterpret_cast< AbstractGraph*(*)>(_a[1]))); break;
        case 20: addDisplayDivider(); break;
        case 21: helpDialog(); break;
        case 22: showOffset((*reinterpret_cast< Qt::CheckState(*)>(_a[1]))); break;
        case 23: reportFinished(); break;
        default: ;
        }
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::newFileOpen(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::newGtfFileOpen(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
