/****************************************************************************
** Meta object code from reading C++ file 'stuscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../student/stuscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'stuscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_StuScreen_t {
    QByteArrayData data[7];
    char stringdata0[156];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_StuScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_StuScreen_t qt_meta_stringdata_StuScreen = {
    {
QT_MOC_LITERAL(0, 0, 9), // "StuScreen"
QT_MOC_LITERAL(1, 10, 17), // "backToLoginScreen"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 32), // "on_pushButton_modifyPass_clicked"
QT_MOC_LITERAL(4, 62, 32), // "on_pushButton_selectInfo_clicked"
QT_MOC_LITERAL(5, 95, 33), // "on_pushButton_selectGrade_cli..."
QT_MOC_LITERAL(6, 129, 26) // "on_pushButton_back_clicked"

    },
    "StuScreen\0backToLoginScreen\0\0"
    "on_pushButton_modifyPass_clicked\0"
    "on_pushButton_selectInfo_clicked\0"
    "on_pushButton_selectGrade_clicked\0"
    "on_pushButton_back_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_StuScreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x08 /* Private */,
       4,    0,   41,    2, 0x08 /* Private */,
       5,    0,   42,    2, 0x08 /* Private */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void StuScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<StuScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToLoginScreen(); break;
        case 1: _t->on_pushButton_modifyPass_clicked(); break;
        case 2: _t->on_pushButton_selectInfo_clicked(); break;
        case 3: _t->on_pushButton_selectGrade_clicked(); break;
        case 4: _t->on_pushButton_back_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (StuScreen::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&StuScreen::backToLoginScreen)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject StuScreen::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_StuScreen.data,
    qt_meta_data_StuScreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *StuScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *StuScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_StuScreen.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int StuScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void StuScreen::backToLoginScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
