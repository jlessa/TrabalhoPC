/****************************************************************************
** Meta object code from reading C++ file 'telaresp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../interface/telaresp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'telaresp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_telaResp_t {
    QByteArrayData data[14];
    char stringdata[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_telaResp_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_telaResp_t qt_meta_stringdata_telaResp = {
    {
QT_MOC_LITERAL(0, 0, 8),
QT_MOC_LITERAL(1, 9, 14),
QT_MOC_LITERAL(2, 24, 0),
QT_MOC_LITERAL(3, 25, 1),
QT_MOC_LITERAL(4, 27, 1),
QT_MOC_LITERAL(5, 29, 1),
QT_MOC_LITERAL(6, 31, 1),
QT_MOC_LITERAL(7, 33, 6),
QT_MOC_LITERAL(8, 40, 8),
QT_MOC_LITERAL(9, 49, 3),
QT_MOC_LITERAL(10, 53, 15),
QT_MOC_LITERAL(11, 69, 3),
QT_MOC_LITERAL(12, 73, 13),
QT_MOC_LITERAL(13, 87, 3)
    },
    "telaResp\0valorEscolidos\0\0x\0y\0h\0n\0"
    "setFun\0QString&\0fun\0escolhaPreditor\0"
    "esc\0escolhaMetodo\0pos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_telaResp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x0a /* Public */,
       7,    1,   43,    2, 0x0a /* Public */,
      10,    1,   46,    2, 0x0a /* Public */,
      12,    1,   49,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Double, QMetaType::Double, QMetaType::Double, QMetaType::Double,    3,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Int,   13,

       0        // eod
};

void telaResp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        telaResp *_t = static_cast<telaResp *>(_o);
        switch (_id) {
        case 0: _t->valorEscolidos((*reinterpret_cast< double(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->setFun((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->escolhaPreditor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->escolhaMetodo((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject telaResp::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_telaResp.data,
      qt_meta_data_telaResp,  qt_static_metacall, 0, 0}
};


const QMetaObject *telaResp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *telaResp::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_telaResp.stringdata))
        return static_cast<void*>(const_cast< telaResp*>(this));
    return QDialog::qt_metacast(_clname);
}

int telaResp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
