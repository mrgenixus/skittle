/****************************************************************************
** Meta object code from reading C++ file 'GtfReader.h'
**
** Created: Sun Aug 7 22:19:42 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "GtfReader.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GtfReader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GtfReader[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x05,
      53,   47,   10,   10, 0x05,
      81,   79,   10,   10, 0x05,

 // slots: signature, parameters, type, tag, flags
     115,   10,   10,   10, 0x0a,
     134,  129,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GtfReader[] = {
    "GtfReader\0\0newGtfFileRead(vector<track_entry>)\0"
    "start\0progressValueChanged(int)\0,\0"
    "BookmarkAdded(track_entry,string)\0"
    "addBookmark()\0file\0determineOutputFile(QString)\0"
};

const QMetaObject GtfReader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_GtfReader,
      qt_meta_data_GtfReader, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GtfReader::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GtfReader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GtfReader::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GtfReader))
        return static_cast<void*>(const_cast< GtfReader*>(this));
    return QObject::qt_metacast(_clname);
}

int GtfReader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: newGtfFileRead((*reinterpret_cast< const vector<track_entry>(*)>(_a[1]))); break;
        case 1: progressValueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: BookmarkAdded((*reinterpret_cast< track_entry(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 3: addBookmark(); break;
        case 4: determineOutputFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GtfReader::newGtfFileRead(const vector<track_entry> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GtfReader::progressValueChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GtfReader::BookmarkAdded(track_entry _t1, string _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
