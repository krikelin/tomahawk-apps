/****************************************************************************
** Meta object code from reading C++ file 'WebAppPlugin.h'
**
** Created: Sun Oct 13 19:43:25 2013
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../WebAppPlugin.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WebAppPlugin.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Tomahawk__Widgets__WebAppPlugin[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_Tomahawk__Widgets__WebAppPlugin[] = {
    "Tomahawk::Widgets::WebAppPlugin\0"
};

void Tomahawk::Widgets::WebAppPlugin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObjectExtraData Tomahawk::Widgets::WebAppPlugin::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Tomahawk::Widgets::WebAppPlugin::staticMetaObject = {
    { &ViewPageLazyLoader<WebAppWidget>::staticMetaObject, qt_meta_stringdata_Tomahawk__Widgets__WebAppPlugin,
      qt_meta_data_Tomahawk__Widgets__WebAppPlugin, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Tomahawk::Widgets::WebAppPlugin::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Tomahawk::Widgets::WebAppPlugin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Tomahawk::Widgets::WebAppPlugin::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Tomahawk__Widgets__WebAppPlugin))
        return static_cast<void*>(const_cast< WebAppPlugin*>(this));
    if (!strcmp(_clname, "tomahawk.ViewPage/1.0"))
        return static_cast< Tomahawk::ViewPagePlugin*>(const_cast< WebAppPlugin*>(this));
    return ViewPageLazyLoader<WebAppWidget>::qt_metacast(_clname);
}

int Tomahawk::Widgets::WebAppPlugin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ViewPageLazyLoader<WebAppWidget>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
QT_END_MOC_NAMESPACE
