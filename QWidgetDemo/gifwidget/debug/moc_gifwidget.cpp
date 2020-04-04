/****************************************************************************
** Meta object code from reading C++ file 'gifwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gifwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gifwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GifWidget_t {
    QByteArrayData data[12];
    char stringdata0[115];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GifWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GifWidget_t qt_meta_stringdata_GifWidget = {
    {
QT_MOC_LITERAL(0, 0, 9), // "GifWidget"
QT_MOC_LITERAL(1, 10, 11), // "initControl"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 8), // "initForm"
QT_MOC_LITERAL(4, 32, 9), // "saveImage"
QT_MOC_LITERAL(5, 42, 6), // "record"
QT_MOC_LITERAL(6, 49, 8), // "closeAll"
QT_MOC_LITERAL(7, 58, 10), // "resizeForm"
QT_MOC_LITERAL(8, 69, 14), // "setBorderWidth"
QT_MOC_LITERAL(9, 84, 11), // "borderWidth"
QT_MOC_LITERAL(10, 96, 10), // "setBgColor"
QT_MOC_LITERAL(11, 107, 7) // "bgColor"

    },
    "GifWidget\0initControl\0\0initForm\0"
    "saveImage\0record\0closeAll\0resizeForm\0"
    "setBorderWidth\0borderWidth\0setBgColor\0"
    "bgColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GifWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       2,   66, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x0a /* Public */,
      10,    1,   63,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void, QMetaType::QColor,   11,

 // properties: name, type, flags
       9, QMetaType::Int, 0x00095103,
      11, QMetaType::QColor, 0x00095103,

       0        // eod
};

void GifWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GifWidget *_t = static_cast<GifWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initControl(); break;
        case 1: _t->initForm(); break;
        case 2: _t->saveImage(); break;
        case 3: _t->record(); break;
        case 4: _t->closeAll(); break;
        case 5: _t->resizeForm(); break;
        case 6: _t->setBorderWidth((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->setBgColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        GifWidget *_t = static_cast<GifWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->getBorderWidth(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getBgColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        GifWidget *_t = static_cast<GifWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBorderWidth(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setBgColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject GifWidget::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_GifWidget.data,
      qt_meta_data_GifWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *GifWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GifWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_GifWidget.stringdata0))
        return static_cast<void*>(const_cast< GifWidget*>(this));
    return QDialog::qt_metacast(_clname);
}

int GifWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 2;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 2;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
