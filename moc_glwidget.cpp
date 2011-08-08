/****************************************************************************
** Meta object code from reading C++ file 'glwidget.h'
**
** Created: Sun Aug 7 22:19:41 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "glwidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'glwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GLWidget[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      13,       // signalCount

 // signals: signature, parameters, type, tag, flags
      10,    9,    9,    9, 0x05,
      28,    9,    9,    9, 0x05,
      51,    9,    9,    9, 0x05,
      74,    9,    9,    9, 0x05,
      93,    9,    9,    9, 0x05,
     112,    9,    9,    9, 0x05,
     131,    9,    9,    9, 0x05,
     160,    9,    9,    9, 0x05,
     173,    9,    9,    9, 0x05,
     216,    9,    9,    9, 0x05,
     237,    9,    9,    9, 0x05,
     264,    9,    9,    9, 0x05,
     291,    9,    9,    9, 0x05,

 // slots: signature, parameters, type, tag, flags
     309,    9,    9,    9, 0x0a,
     328,  326,    9,    9, 0x0a,
     344,    9,    9,    9, 0x0a,
     373,    9,    9,    9, 0x0a,
     397,    9,    9,    9, 0x0a,
     423,    9,    9,    9, 0x0a,
     447,    9,    9,    9, 0x0a,
     473,    9,    9,    9, 0x0a,
     502,  497,    9,    9, 0x0a,
     515,    9,    9,    9, 0x0a,
     536,    9,    9,    9, 0x0a,
     552,    9,    9,    9, 0x0a,
     600,  591,  572,    9, 0x0a,
     630,  591,  572,    9, 0x0a,
     686,  668,    9,    9, 0x0a,
     720,    9,    9,    9, 0x0a,
     738,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_GLWidget[] = {
    "GLWidget\0\0scaleChanged(int)\0"
    "scaleChangedSmart(int)\0totalWidthChanged(int)\0"
    "xOffsetChange(int)\0printText(QString)\0"
    "printHtml(QString)\0addGraphMode(AbstractGraph*)\0"
    "addDivider()\0AnnotationDisplayAdded(AnnotationDisplay*)\0"
    "displaySizeChanged()\0hideSettings(QScrollArea*)\0"
    "showSettings(QScrollArea*)\0useTextures(bool)\0"
    "reportOnFinish()\0z\0changeZoom(int)\0"
    "displayString(const string*)\0"
    "on_moveButton_clicked()\0"
    "on_selectButton_clicked()\0"
    "on_findButton_clicked()\0"
    "on_resizeButton_clicked()\0"
    "on_zoomButton_clicked()\0tool\0setTool(int)\0"
    "slideHorizontal(int)\0updateDisplay()\0"
    "updateDisplaySize()\0AnnotationDisplay*\0"
    "fileName\0addAnnotationDisplay(QString)\0"
    "findMatchingAnnotationDisplay(string)\0"
    "entry,gtfFileName\0addTrackEntry(track_entry,string)\0"
    "loadFile(QString)\0useHardwareAcceleration(bool)\0"
};

const QMetaObject GLWidget::staticMetaObject = {
    { &QGLWidget::staticMetaObject, qt_meta_stringdata_GLWidget,
      qt_meta_data_GLWidget, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GLWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GLWidget))
        return static_cast<void*>(const_cast< GLWidget*>(this));
    return QGLWidget::qt_metacast(_clname);
}

int GLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: scaleChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: scaleChangedSmart((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: totalWidthChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: xOffsetChange((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: printText((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: printHtml((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: addGraphMode((*reinterpret_cast< AbstractGraph*(*)>(_a[1]))); break;
        case 7: addDivider(); break;
        case 8: AnnotationDisplayAdded((*reinterpret_cast< AnnotationDisplay*(*)>(_a[1]))); break;
        case 9: displaySizeChanged(); break;
        case 10: hideSettings((*reinterpret_cast< QScrollArea*(*)>(_a[1]))); break;
        case 11: showSettings((*reinterpret_cast< QScrollArea*(*)>(_a[1]))); break;
        case 12: useTextures((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 13: reportOnFinish(); break;
        case 14: changeZoom((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: displayString((*reinterpret_cast< const string*(*)>(_a[1]))); break;
        case 16: on_moveButton_clicked(); break;
        case 17: on_selectButton_clicked(); break;
        case 18: on_findButton_clicked(); break;
        case 19: on_resizeButton_clicked(); break;
        case 20: on_zoomButton_clicked(); break;
        case 21: setTool((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 22: slideHorizontal((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 23: updateDisplay(); break;
        case 24: updateDisplaySize(); break;
        case 25: { AnnotationDisplay* _r = addAnnotationDisplay((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AnnotationDisplay**>(_a[0]) = _r; }  break;
        case 26: { AnnotationDisplay* _r = findMatchingAnnotationDisplay((*reinterpret_cast< string(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< AnnotationDisplay**>(_a[0]) = _r; }  break;
        case 27: addTrackEntry((*reinterpret_cast< track_entry(*)>(_a[1])),(*reinterpret_cast< string(*)>(_a[2]))); break;
        case 28: loadFile((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 29: useHardwareAcceleration((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void GLWidget::scaleChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void GLWidget::scaleChangedSmart(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void GLWidget::totalWidthChanged(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void GLWidget::xOffsetChange(int _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void GLWidget::printText(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void GLWidget::printHtml(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void GLWidget::addGraphMode(AbstractGraph * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void GLWidget::addDivider()
{
    QMetaObject::activate(this, &staticMetaObject, 7, 0);
}

// SIGNAL 8
void GLWidget::AnnotationDisplayAdded(AnnotationDisplay * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void GLWidget::displaySizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, 0);
}

// SIGNAL 10
void GLWidget::hideSettings(QScrollArea * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void GLWidget::showSettings(QScrollArea * _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void GLWidget::useTextures(bool _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}
QT_END_MOC_NAMESPACE
