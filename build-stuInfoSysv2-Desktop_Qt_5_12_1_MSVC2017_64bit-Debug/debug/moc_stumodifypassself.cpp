/****************************************************************************
** Meta object code from reading C++ file 'stumodifypassself.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../student/stumodifypassself.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stumodifypassself.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StuModifyPassSelf_t {
    QByteArrayData data[6];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StuModifyPassSelf_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StuModifyPassSelf_t qt_meta_stringdata_StuModifyPassSelf = {
    {
QT_MOC_LITERAL(0, 0, 17), // "StuModifyPassSelf"
QT_MOC_LITERAL(1, 18, 15), // "backToStuScreen"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 26), // "on_pushButton_back_clicked"
QT_MOC_LITERAL(4, 62, 32), // "on_pushButton_modifyPass_clicked"
QT_MOC_LITERAL(5, 95, 35) // "on_lineEdit_newPass_editingFi..."

    },
    "StuModifyPassSelf\0backToStuScreen\0\0"
    "on_pushButton_back_clicked\0"
    "on_pushButton_modifyPass_clicked\0"
    "on_lineEdit_newPass_editingFinished"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StuModifyPassSelf[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StuModifyPassSelf::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StuModifyPassSelf *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToStuScreen(); break;
        case 1: _t->on_pushButton_back_clicked(); break;
        case 2: _t->on_pushButton_modifyPass_clicked(); break;
        case 3: _t->on_lineEdit_newPass_editingFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StuModifyPassSelf::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StuModifyPassSelf::backToStuScreen)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StuModifyPassSelf::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_StuModifyPassSelf.data,
    qt_meta_data_StuModifyPassSelf,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StuModifyPassSelf::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StuModifyPassSelf::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StuModifyPassSelf.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StuModifyPassSelf::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void StuModifyPassSelf::backToStuScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
