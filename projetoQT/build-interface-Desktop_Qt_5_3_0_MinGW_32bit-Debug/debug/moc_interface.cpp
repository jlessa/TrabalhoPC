/****************************************************************************
** Meta object code from reading C++ file 'interface.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../interface/interface.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interface.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Interface_t {
    QByteArrayData data[17];
    char stringdata[239];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Interface_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Interface_t qt_meta_stringdata_Interface = {
    {
QT_MOC_LITERAL(0, 0, 9),
QT_MOC_LITERAL(1, 10, 20),
QT_MOC_LITERAL(2, 31, 0),
QT_MOC_LITERAL(3, 32, 22),
QT_MOC_LITERAL(4, 55, 1),
QT_MOC_LITERAL(5, 57, 24),
QT_MOC_LITERAL(6, 82, 22),
QT_MOC_LITERAL(7, 105, 1),
QT_MOC_LITERAL(8, 107, 22),
QT_MOC_LITERAL(9, 130, 1),
QT_MOC_LITERAL(10, 132, 22),
QT_MOC_LITERAL(11, 155, 1),
QT_MOC_LITERAL(12, 157, 20),
QT_MOC_LITERAL(13, 178, 4),
QT_MOC_LITERAL(14, 183, 24),
QT_MOC_LITERAL(15, 208, 24),
QT_MOC_LITERAL(16, 233, 5)
    },
    "Interface\0on_botaoSair_clicked\0\0"
    "on_valorX_valueChanged\0x\0"
    "on_botaoCalcular_clicked\0"
    "on_valorY_valueChanged\0y\0"
    "on_valorH_valueChanged\0h\0"
    "on_valorN_valueChanged\0n\0on_funcao_textEdited\0"
    "arg1\0on_checkPreditor_clicked\0"
    "on_comboMetodo_activated\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Interface[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    1,   60,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    1,   64,    2, 0x08 /* Private */,
       8,    1,   67,    2, 0x08 /* Private */,
      10,    1,   70,    2, 0x08 /* Private */,
      12,    1,   73,    2, 0x08 /* Private */,
      14,    0,   76,    2, 0x08 /* Private */,
      15,    1,   77,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    7,
    QMetaType::Void, QMetaType::Double,    9,
    QMetaType::Void, QMetaType::Double,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,

       0        // eod
};

void Interface::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Interface *_t = static_cast<Interface *>(_o);
        switch (_id) {
        case 0: _t->on_botaoSair_clicked(); break;
        case 1: _t->on_valorX_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 2: _t->on_botaoCalcular_clicked(); break;
        case 3: _t->on_valorY_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 4: _t->on_valorH_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 5: _t->on_valorN_valueChanged((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 6: _t->on_funcao_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_checkPreditor_clicked(); break;
        case 8: _t->on_comboMetodo_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Interface::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Interface.data,
      qt_meta_data_Interface,  qt_static_metacall, 0, 0}
};


const QMetaObject *Interface::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Interface::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Interface.stringdata))
        return static_cast<void*>(const_cast< Interface*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Interface::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
