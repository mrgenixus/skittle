/****************************************************************************
** Meta object code from reading C++ file 'UiVariables.h'
**
** Created: Sun Aug 7 22:19:53 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "UiVariables.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'UiVariables.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_UiVariables[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
      40,   12,   12,   12, 0x0a,
      61,   59,   12,   12, 0x0a,
      80,   12,   12,   12, 0x0a,
     109,  103,   12,   12, 0x0a,
     136,  132,   12,   12, 0x0a,
     154,  150,   12,   12, 0x0a,
     169,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_UiVariables[] = {
    "UiVariables\0\0StateChanged(UiVariables*)\0"
    "print(const char*)\0s\0print(std::string)\0"
    "printHtml(std::string)\0s,num\0"
    "print(const char*,int)\0num\0printNum(int)\0"
    "str\0print(QString)\0updateDisplay()\0"
};

const QMetaObject UiVariables::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_UiVariables,
      qt_meta_data_UiVariables, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &UiVariables::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *UiVariables::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *UiVariables::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_UiVariables))
        return static_cast<void*>(const_cast< UiVariables*>(this));
    return QObject::qt_metacast(_clname);
}

int UiVariables::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: StateChanged((*reinterpret_cast< UiVariables*(*)>(_a[1]))); break;
        case 1: print((*reinterpret_cast< const char*(*)>(_a[1]))); break;
        case 2: print((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 3: printHtml((*reinterpret_cast< std::string(*)>(_a[1]))); break;
        case 4: print((*reinterpret_cast< const char*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: printNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: print((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: updateDisplay(); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void UiVariables::StateChanged(UiVariables * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
