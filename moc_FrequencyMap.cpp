/****************************************************************************
** Meta object code from reading C++ file 'FrequencyMap.h'
**
** Created: Wed Mar 9 02:04:18 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FrequencyMap.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FrequencyMap.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FrequencyMap[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      33,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      60,   56,   13,   13, 0x0a,
      78,   56,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FrequencyMap[] = {
    "FrequencyMap\0\0fStartChanged(int)\0"
    "graphWidthChanged(int)\0val\0changeFStart(int)\0"
    "changeGraphWidth(int)\0"
};

const QMetaObject FrequencyMap::staticMetaObject = {
    { &AbstractGraph::staticMetaObject, qt_meta_stringdata_FrequencyMap,
      qt_meta_data_FrequencyMap, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FrequencyMap::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FrequencyMap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FrequencyMap::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FrequencyMap))
        return static_cast<void*>(const_cast< FrequencyMap*>(this));
    return AbstractGraph::qt_metacast(_clname);
}

int FrequencyMap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractGraph::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fStartChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: graphWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: changeFStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: changeGraphWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FrequencyMap::fStartChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FrequencyMap::graphWidthChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
