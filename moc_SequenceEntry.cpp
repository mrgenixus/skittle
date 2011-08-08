/****************************************************************************
** Meta object code from reading C++ file 'SequenceEntry.h'
**
** Created: Sun Aug 7 22:19:50 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SequenceEntry.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SequenceEntry.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_SequenceEntry[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x05,
      30,   14,   14,   14, 0x05,

 // slots: signature, parameters, type, tag, flags
      58,   14,   14,   14, 0x0a,
      88,   14,   14,   14, 0x0a,
     105,   14,   14,   14, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_SequenceEntry[] = {
    "SequenceEntry\0\0colorChanged()\0"
    "removeEntry(SequenceEntry*)\0"
    "setHighlightSequence(QString)\0"
    "removeSequence()\0changeColor()\0"
};

const QMetaObject SequenceEntry::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SequenceEntry,
      qt_meta_data_SequenceEntry, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &SequenceEntry::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *SequenceEntry::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *SequenceEntry::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SequenceEntry))
        return static_cast<void*>(const_cast< SequenceEntry*>(this));
    return QWidget::qt_metacast(_clname);
}

int SequenceEntry::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: colorChanged(); break;
        case 1: removeEntry((*reinterpret_cast< SequenceEntry*(*)>(_a[1]))); break;
        case 2: setHighlightSequence((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: removeSequence(); break;
        case 4: changeColor(); break;
        default: ;
        }
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void SequenceEntry::colorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void SequenceEntry::removeEntry(SequenceEntry * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
