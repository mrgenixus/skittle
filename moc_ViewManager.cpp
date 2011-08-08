/****************************************************************************
** Meta object code from reading C++ file 'ViewManager.h'
**
** Created: Sun Aug 7 22:19:52 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "ViewManager.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ViewManager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ViewManager[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      36,   23,   13,   12, 0x0a,
      53,   12,   13,   12, 0x2a,
      66,   12,   12,   12, 0x0a,
     107,   99,   12,   12, 0x0a,
     139,   12,   12,   12, 0x0a,
     159,   12,   12,   12, 0x0a,
     189,   12,   12,   12, 0x0a,
     203,   12,   12,   12, 0x0a,
     226,  222,   12,   12, 0x0a,
     253,  249,   12,   12, 0x0a,
     267,  249,   12,   12, 0x0a,
     282,   12,   12,   12, 0x0a,
     305,   12,   12,   12, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_ViewManager[] = {
    "ViewManager\0\0GLWidget*\0suppressOpen\0"
    "addNewView(bool)\0addNewView()\0"
    "changeSelection(MdiChildWindow*)\0"
    "closing\0closeSubWindow(MdiChildWindow*)\0"
    "changeFile(QString)\0addAnnotationDisplay(QString)\0"
    "addBookmark()\0handleWindowSync()\0val\0"
    "changePublicStart(int)\0num\0printNum(int)\0"
    "printNum2(int)\0updateCurrentDisplay()\0"
    "scaleChangedSmart(int)\0"
};

const QMetaObject ViewManager::staticMetaObject = {
    { &QMdiArea::staticMetaObject, qt_meta_stringdata_ViewManager,
      qt_meta_data_ViewManager, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ViewManager::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ViewManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ViewManager::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ViewManager))
        return static_cast<void*>(const_cast< ViewManager*>(this));
    return QMdiArea::qt_metacast(_clname);
}

int ViewManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMdiArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: { GLWidget* _r = addNewView((*reinterpret_cast< bool(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< GLWidget**>(_a[0]) = _r; }  break;
        case 1: { GLWidget* _r = addNewView();
            if (_a[0]) *reinterpret_cast< GLWidget**>(_a[0]) = _r; }  break;
        case 2: changeSelection((*reinterpret_cast< MdiChildWindow*(*)>(_a[1]))); break;
        case 3: closeSubWindow((*reinterpret_cast< MdiChildWindow*(*)>(_a[1]))); break;
        case 4: changeFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: addAnnotationDisplay((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: addBookmark(); break;
        case 7: handleWindowSync(); break;
        case 8: changePublicStart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: printNum((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: printNum2((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: updateCurrentDisplay(); break;
        case 12: scaleChangedSmart((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 13;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
