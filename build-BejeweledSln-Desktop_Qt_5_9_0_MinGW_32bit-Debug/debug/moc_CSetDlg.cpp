/****************************************************************************
** Meta object code from reading C++ file 'CSetDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BejeweledSln/CSetDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CSetDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CSetDlg_t {
    QByteArrayData data[11];
    char stringdata0[79];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CSetDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CSetDlg_t qt_meta_stringdata_CSetDlg = {
    {
QT_MOC_LITERAL(0, 0, 7), // "CSetDlg"
QT_MOC_LITERAL(1, 8, 6), // "cancel"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 4), // "save"
QT_MOC_LITERAL(4, 21, 8), // "default1"
QT_MOC_LITERAL(5, 30, 8), // "default2"
QT_MOC_LITERAL(6, 39, 4), // "diy1"
QT_MOC_LITERAL(7, 44, 4), // "diy2"
QT_MOC_LITERAL(8, 49, 8), // "browser1"
QT_MOC_LITERAL(9, 58, 8), // "browser2"
QT_MOC_LITERAL(10, 67, 11) // "valuechange"

    },
    "CSetDlg\0cancel\0\0save\0default1\0default2\0"
    "diy1\0diy2\0browser1\0browser2\0valuechange"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CSetDlg[] = {

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
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CSetDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CSetDlg *_t = static_cast<CSetDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->cancel(); break;
        case 1: _t->save(); break;
        case 2: _t->default1(); break;
        case 3: _t->default2(); break;
        case 4: _t->diy1(); break;
        case 5: _t->diy2(); break;
        case 6: _t->browser1(); break;
        case 7: _t->browser2(); break;
        case 8: _t->valuechange(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CSetDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CSetDlg.data,
      qt_meta_data_CSetDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CSetDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CSetDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CSetDlg.stringdata0))
        return static_cast<void*>(const_cast< CSetDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CSetDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
