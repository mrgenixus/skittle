/****************************************************************************
** Meta object code from reading C++ file 'FastaReader.h'
**
** Created: Wed Mar 9 01:48:50 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "FastaReader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FastaReader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FastaReader[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   13,   12,   12, 0x05,
      42,   12,   12,   12, 0x05,
      75,   69,   12,   12, 0x05,

 // slots: signature, parameters, type, tag, flags
     101,   13,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FastaReader[] = {
    "FastaReader\0\0name\0fileNameChanged(string)\0"
    "newFileRead(const string*)\0start\0"
    "progressValueChanged(int)\0readFile(QString)\0"
};

const QMetaObject FastaReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_FastaReader,
      qt_meta_data_FastaReader, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FastaReader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FastaReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FastaReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FastaReader))
        return static_cast<void*>(const_cast< FastaReader*>(this));
    return QObject::qt_metacast(_clname);
}

int FastaReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fileNameChanged((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 1: newFileRead((*reinterpret_cast< const string*(*)>(_a[1]))); break;
        case 2: progressValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: readFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void FastaReader::fileNameChanged(string _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FastaReader::newFileRead(const string * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FastaReader::progressValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
