/****************************************************************************
** Meta object code from reading C++ file 'AbstractGraph.h'
**
** Created: Wed Mar 9 01:48:38 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "AbstractGraph.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AbstractGraph.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_AbstractGraph[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      32,   14,   14,   14, 0x05,
      59,   14,   14,   14, 0x05,
      86,   14,   14,   14, 0x05,
     104,   14,   14,   14, 0x05,
     121,   14,   14,   14, 0x05,
     139,   14,   14,   14, 0x05,
     157,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
     182,  180,   14,   14, 0x0a,
     199,  180,   14,   14, 0x0a,
     215,  180,   14,   14, 0x0a,
     234,  232,   14,   14, 0x0a,
     251,   14,   14,   14, 0x0a,
     264,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_AbstractGraph[] = {
    "AbstractGraph\0\0displayChanged()\0"
    "hideSettings(QScrollArea*)\0"
    "showSettings(QScrollArea*)\0scaleChanged(int)\0"
    "sizeChanged(int)\0startChanged(int)\0"
    "widthChanged(int)\0deleteButton(QAction*)\0"
    "s\0changeScale(int)\0changeSize(int)\0"
    "changeStart(int)\0w\0changeWidth(int)\0"
    "invalidate()\0toggleVisibility()\0"
};

const QMetaObject AbstractGraph::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_AbstractGraph,
      qt_meta_data_AbstractGraph, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &AbstractGraph::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *AbstractGraph::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *AbstractGraph::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_AbstractGraph))
        return static_cast<void*>(const_cast< AbstractGraph*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int AbstractGraph::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: displayChanged(); break;
        case 1: hideSettings((*reinterpret_cast< QScrollArea*(*)>(_a[1]))); break;
        case 2: showSettings((*reinterpret_cast< QScrollArea*(*)>(_a[1]))); break;
        case 3: scaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: sizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: startChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: widthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: deleteButton((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 8: changeScale((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: changeSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: changeStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: changeWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: invalidate(); break;
        case 13: toggleVisibility(); break;
        default: ;
        }
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void AbstractGraph::displayChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void AbstractGraph::hideSettings(QScrollArea * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void AbstractGraph::showSettings(QScrollArea * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void AbstractGraph::scaleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void AbstractGraph::sizeChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void AbstractGraph::startChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void AbstractGraph::widthChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void AbstractGraph::deleteButton(QAction * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
