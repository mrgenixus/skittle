/****************************************************************************
** Meta object code from reading C++ file 'MdiChildWindow.h'
**
** Created: Wed Mar 9 02:04:28 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "MdiChildWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MdiChildWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MdiChildWindow[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      16,   15,   15,   15, 0x05,
      50,   15,   15,   15, 0x05,

 // slots: signature, parameters, type, tag, flags
      79,   75,   15,   15, 0x0a,
     116,   75,   15,   15, 0x0a,
     148,   75,   15,   15, 0x0a,
     172,   75,   15,   15, 0x0a,
     191,   15,   15,   15, 0x0a,
     205,   15,   15,   15, 0x0a,
     235,   15,   15,   15, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MdiChildWindow[] = {
    "MdiChildWindow\0\0subWindowClosing(MdiChildWindow*)\0"
    "clicked(MdiChildWindow*)\0val\0"
    "changeLocalStartFromPublicStart(int)\0"
    "changeLocalStartFromOffset(int)\0"
    "setHorizontalWidth(int)\0setOffsetStep(int)\0"
    "setPageSize()\0hideSettingsTab(QScrollArea*)\0"
    "showSettingsTab(QScrollArea*)\0"
};

const QMetaObject MdiChildWindow::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_MdiChildWindow,
      qt_meta_data_MdiChildWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MdiChildWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MdiChildWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MdiChildWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MdiChildWindow))
        return static_cast<void*>(const_cast< MdiChildWindow*>(this));
    return QFrame::qt_metacast(_clname);
}

int MdiChildWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: subWindowClosing((*reinterpret_cast< MdiChildWindow*(*)>(_a[1]))); break;
        case 1: clicked((*reinterpret_cast< MdiChildWindow*(*)>(_a[1]))); break;
        case 2: changeLocalStartFromPublicStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: changeLocalStartFromOffset((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: setHorizontalWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: setOffsetStep((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: setPageSize(); break;
        case 7: hideSettingsTab((*reinterpret_cast< QScrollArea*(*)>(_a[1]))); break;
        case 8: showSettingsTab((*reinterpret_cast< QScrollArea*(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void MdiChildWindow::subWindowClosing(MdiChildWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MdiChildWindow::clicked(MdiChildWindow * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
