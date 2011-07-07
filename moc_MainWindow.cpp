/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created: Wed Mar 9 02:04:28 2011
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
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x05,
      38,   12,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
      75,   62,   11,   11, 0x0a,
      98,   11,   11,   11, 0x0a,
     114,  105,   11,   11, 0x0a,
     128,   11,   11,   11, 0x0a,
     148,   11,   11,   11, 0x0a,
     169,   11,   11,   11, 0x0a,
     191,   12,   11,   11, 0x0a,
     221,   11,   11,   11, 0x0a,
     240,  231,   11,   11, 0x0a,
     257,   11,   11,   11, 0x0a,
     280,  271,   11,   11, 0x0a,
     297,   11,   11,   11, 0x0a,
     311,   11,   11,   11, 0x0a,
     325,   11,   11,   11, 0x0a,
     338,   11,   11,   11, 0x0a,
     372,   11,   11,   11, 0x0a,
     392,   11,   11,   11, 0x0a,
     405,   11,   11,   11, 0x0a,
     432,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0name\0newFileOpen(QString)\0"
    "newGtfFileOpen(QString)\0presetAction\0"
    "removeButton(QAction*)\0open()\0fileName\0"
    "open(QString)\0updateProgress(int)\0"
    "updateState(QString)\0updateStatus(QString)\0"
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
        case 2: removeButton((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 3: open(); break;
        case 4: open((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: updateProgress((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: updateState((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: updateStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: changeWindowName((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 9: openGtf(); break;
        case 10: changeWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: changeWidth(); break;
        case 12: changeScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: changeScale(); break;
        case 14: doubleWidth(); break;
        case 15: halveWidth(); break;
        case 16: addDisplayActions((*reinterpret_cast< AbstractGraph*(*)>(_a[1]))); break;
        case 17: addDisplayDivider(); break;
        case 18: helpDialog(); break;
        case 19: showOffset((*reinterpret_cast< Qt::CheckState(*)>(_a[1]))); break;
        case 20: reportFinished(); break;
        default: ;
        }
        _id -= 21;
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
