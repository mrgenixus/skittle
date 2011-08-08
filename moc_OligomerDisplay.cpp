/****************************************************************************
** Meta object code from reading C++ file 'OligomerDisplay.h'
**
** Created: Sun Aug 7 22:19:49 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "OligomerDisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OligomerDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_OligomerDisplay[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   16,   16,   16, 0x05,

 // slots: signature, parameters, type, tag, flags
      43,   40,   16,   16, 0x0a,
      66,   16,   16,   16, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_OligomerDisplay[] = {
    "OligomerDisplay\0\0wordLengthChanged(int)\0"
    "mD\0changeMinDelta(double)\0"
    "changeWordLength(int)\0"
};

const QMetaObject OligomerDisplay::staticMetaObject = {
    { &AbstractGraph::staticMetaObject, qt_meta_stringdata_OligomerDisplay,
      qt_meta_data_OligomerDisplay, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &OligomerDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *OligomerDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *OligomerDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_OligomerDisplay))
        return static_cast<void*>(const_cast< OligomerDisplay*>(this));
    return AbstractGraph::qt_metacast(_clname);
}

int OligomerDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractGraph::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: wordLengthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: changeMinDelta((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: changeWordLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OligomerDisplay::wordLengthChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
