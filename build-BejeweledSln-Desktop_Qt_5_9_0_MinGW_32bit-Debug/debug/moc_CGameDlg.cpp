/****************************************************************************
** Meta object code from reading C++ file 'CGameDlg.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../BejeweledSln/CGameDlg.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CGameDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CGameDlg_t {
    QByteArrayData data[8];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CGameDlg_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CGameDlg_t qt_meta_stringdata_CGameDlg = {
    {
QT_MOC_LITERAL(0, 0, 8), // "CGameDlg"
QT_MOC_LITERAL(1, 9, 4), // "menu"
QT_MOC_LITERAL(2, 14, 0), // ""
QT_MOC_LITERAL(3, 15, 14), // "updateProgress"
QT_MOC_LITERAL(4, 30, 15), // "pauseorcontinue"
QT_MOC_LITERAL(5, 46, 9), // "tishislot"
QT_MOC_LITERAL(6, 56, 10), // "backtohome"
QT_MOC_LITERAL(7, 67, 4) // "boom"

    },
    "CGameDlg\0menu\0\0updateProgress\0"
    "pauseorcontinue\0tishislot\0backtohome\0"
    "boom"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CGameDlg[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CGameDlg::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CGameDlg *_t = static_cast<CGameDlg *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->menu(); break;
        case 1: _t->updateProgress(); break;
        case 2: _t->pauseorcontinue(); break;
        case 3: _t->tishislot(); break;
        case 4: _t->backtohome(); break;
        case 5: _t->boom(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject CGameDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_CGameDlg.data,
      qt_meta_data_CGameDlg,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *CGameDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CGameDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CGameDlg.stringdata0))
        return static_cast<void*>(const_cast< CGameDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int CGameDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
