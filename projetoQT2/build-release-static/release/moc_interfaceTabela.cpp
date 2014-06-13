/****************************************************************************
** Meta object code from reading C++ file 'interfaceTabela.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../interface/interfaceTabela.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'interfaceTabela.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_interfaceTabela_t {
    QByteArrayData data[15];
    char stringdata[111];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_interfaceTabela_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_interfaceTabela_t qt_meta_stringdata_interfaceTabela = {
    {
QT_MOC_LITERAL(0, 0, 15),
QT_MOC_LITERAL(1, 16, 17),
QT_MOC_LITERAL(2, 34, 0),
QT_MOC_LITERAL(3, 35, 8),
QT_MOC_LITERAL(4, 44, 1),
QT_MOC_LITERAL(5, 46, 1),
QT_MOC_LITERAL(6, 48, 1),
QT_MOC_LITERAL(7, 50, 1),
QT_MOC_LITERAL(8, 52, 6),
QT_MOC_LITERAL(9, 59, 8),
QT_MOC_LITERAL(10, 68, 3),
QT_MOC_LITERAL(11, 72, 15),
QT_MOC_LITERAL(12, 88, 3),
QT_MOC_LITERAL(13, 92, 13),
QT_MOC_LITERAL(14, 106, 3)
    },
    "interfaceTabela\0informacoesTabela\0\0"
    "double[]\0x\0y\0h\0n\0setFun\0QString&\0fun\0"
    "escolhaPreditor\0esc\0escolhaMetodo\0pos\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_interfaceTabela[] = {

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
       1,    4,   34,    2, 0x0a,
       8,    1,   43,    2, 0x0a,
      11,    1,   46,    2, 0x0a,
      13,    1,   49,    2, 0x0a,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3, QMetaType::Double, QMetaType::Double,    4,    5,    6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

void interfaceTabela::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        interfaceTabela *_t = static_cast<interfaceTabela *>(_o);
        switch (_id) {
        case 0: _t->informacoesTabela((*reinterpret_cast< double(*)[]>(_a[1])),(*reinterpret_cast< double(*)[]>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< double(*)>(_a[4]))); break;
        case 1: _t->setFun((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->escolhaPreditor((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 3: _t->escolhaMetodo((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject interfaceTabela::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_interfaceTabela.data,
      qt_meta_data_interfaceTabela,  qt_static_metacall, 0, 0}
};


const QMetaObject *interfaceTabela::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *interfaceTabela::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_interfaceTabela.stringdata))
        return static_cast<void*>(const_cast< interfaceTabela*>(this));
    return QDialog::qt_metacast(_clname);
}

int interfaceTabela::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
