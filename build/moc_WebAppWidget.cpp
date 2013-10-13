/****************************************************************************
** Meta object code from reading C++ file 'WebAppWidget.h'
**
** Created: Sun Oct 13 20:05:19 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WebAppWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WebAppWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_WebAppWidget[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      16,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_WebAppWidget[] = {
    "WebAppWidget\0\0t\0loadFinished(bool)\0"
};

void WebAppWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        WebAppWidget *_t = static_cast<WebAppWidget *>(_o);
        switch (_id) {
        case 0: _t->loadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData WebAppWidget::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject WebAppWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WebAppWidget,
      qt_meta_data_WebAppWidget, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &WebAppWidget::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *WebAppWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *WebAppWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_WebAppWidget))
        return static_cast<void*>(const_cast< WebAppWidget*>(this));
    if (!strcmp(_clname, "Tomahawk::ViewPage"))
        return static_cast< Tomahawk::ViewPage*>(const_cast< WebAppWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int WebAppWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
