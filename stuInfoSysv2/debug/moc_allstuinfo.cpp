/****************************************************************************
** Meta object code from reading C++ file 'allstuinfo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../allstuinfo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'allstuinfo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AllStuInfo_t {
    QByteArrayData data[10];
    char stringdata0[218];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AllStuInfo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AllStuInfo_t qt_meta_stringdata_AllStuInfo = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AllStuInfo"
QT_MOC_LITERAL(1, 11, 17), // "backToAdminScreen"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(4, 54, 28), // "on_pushButton_cancel_clicked"
QT_MOC_LITERAL(5, 83, 25), // "on_pushButton_add_clicked"
QT_MOC_LITERAL(6, 109, 28), // "on_pushButton_delete_clicked"
QT_MOC_LITERAL(7, 138, 25), // "on_pushButton_asc_clicked"
QT_MOC_LITERAL(8, 164, 26), // "on_pushButton_desc_clicked"
QT_MOC_LITERAL(9, 191, 26) // "on_pushButton_back_clicked"

    },
    "AllStuInfo\0backToAdminScreen\0\0"
    "on_pushButton_3_clicked\0"
    "on_pushButton_cancel_clicked\0"
    "on_pushButton_add_clicked\0"
    "on_pushButton_delete_clicked\0"
    "on_pushButton_asc_clicked\0"
    "on_pushButton_desc_clicked\0"
    "on_pushButton_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AllStuInfo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AllStuInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AllStuInfo *_t = static_cast<AllStuInfo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToAdminScreen(); break;
        case 1: _t->on_pushButton_3_clicked(); break;
        case 2: _t->on_pushButton_cancel_clicked(); break;
        case 3: _t->on_pushButton_add_clicked(); break;
        case 4: _t->on_pushButton_delete_clicked(); break;
        case 5: _t->on_pushButton_asc_clicked(); break;
        case 6: _t->on_pushButton_desc_clicked(); break;
        case 7: _t->on_pushButton_back_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AllStuInfo::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AllStuInfo::backToAdminScreen)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AllStuInfo::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AllStuInfo.data,
      qt_meta_data_AllStuInfo,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AllStuInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AllStuInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AllStuInfo.stringdata0))
        return static_cast<void*>(const_cast< AllStuInfo*>(this));
    return QWidget::qt_metacast(_clname);
}

int AllStuInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
    return _id;
}

// SIGNAL 0
void AllStuInfo::backToAdminScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
