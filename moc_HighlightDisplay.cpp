/****************************************************************************
** Meta object code from reading C++ file 'HighlightDisplay.h'
**
** Created: Wed Mar 9 02:04:25 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "HighlightDisplay.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'HighlightDisplay.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HighlightDisplay[] = {

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
      18,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      44,   17,   17,   17, 0x0a,
      74,   17,   17,   17, 0x0a,
      91,   17,   17,   17, 0x0a,
     114,   17,   17,   17, 0x0a,
     129,   17,   17,   17, 0x0a,
     157,   17,   17,   17, 0x0a,
     175,   17,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_HighlightDisplay[] = {
    "HighlightDisplay\0\0highlightChanged(QString)\0"
    "setHighlightSequence(QString)\0"
    "addNewSequence()\0addNewSequence(string)\0"
    "openSequence()\0removeEntry(SequenceEntry*)\0"
    "clearAllEntries()\0setPercentSimilarity(int)\0"
};

const QMetaObject HighlightDisplay::staticMetaObject = {
    { &NucleotideDisplay::staticMetaObject, qt_meta_stringdata_HighlightDisplay,
      qt_meta_data_HighlightDisplay, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HighlightDisplay::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HighlightDisplay::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HighlightDisplay::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HighlightDisplay))
        return static_cast<void*>(const_cast< HighlightDisplay*>(this));
    return NucleotideDisplay::qt_metacast(_clname);
}

int HighlightDisplay::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NucleotideDisplay::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: highlightChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: setHighlightSequence((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: addNewSequence(); break;
        case 3: addNewSequence((*reinterpret_cast< string(*)>(_a[1]))); break;
        case 4: openSequence(); break;
        case 5: removeEntry((*reinterpret_cast< SequenceEntry*(*)>(_a[1]))); break;
        case 6: clearAllEntries(); break;
        case 7: setPercentSimilarity((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void HighlightDisplay::highlightChanged(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
