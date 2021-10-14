/****************************************************************************
** Meta object code from reading C++ file 'adminscreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../adminscreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'adminscreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AdminScreen_t {
    QByteArrayData data[10];
    char stringdata0[250];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AdminScreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AdminScreen_t qt_meta_stringdata_AdminScreen = {
    {
QT_MOC_LITERAL(0, 0, 11), // "AdminScreen"
QT_MOC_LITERAL(1, 12, 17), // "backToLoginScreen"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 30), // "on_pushButton_infoShow_clicked"
QT_MOC_LITERAL(4, 62, 29), // "on_pushButton_addInfo_clicked"
QT_MOC_LITERAL(5, 92, 32), // "on_pushButton_modiAdPass_clicked"
QT_MOC_LITERAL(6, 125, 30), // "on_pushButton_modiStuP_clicked"
QT_MOC_LITERAL(7, 156, 30), // "on_pushButton_addGrade_clicked"
QT_MOC_LITERAL(8, 187, 31), // "on_pushButton_gradeShow_clicked"
QT_MOC_LITERAL(9, 219, 30) // "on_pushButton_modyInfo_clicked"

    },
    "AdminScreen\0backToLoginScreen\0\0"
    "on_pushButton_infoShow_clicked\0"
    "on_pushButton_addInfo_clicked\0"
    "on_pushButton_modiAdPass_clicked\0"
    "on_pushButton_modiStuP_clicked\0"
    "on_pushButton_addGrade_clicked\0"
    "on_pushButton_gradeShow_clicked\0"
    "on_pushButton_modyInfo_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AdminScreen[] = {

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

void AdminScreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AdminScreen *_t = static_cast<AdminScreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToLoginScreen(); break;
        case 1: _t->on_pushButton_infoShow_clicked(); break;
        case 2: _t->on_pushButton_addInfo_clicked(); break;
        case 3: _t->on_pushButton_modiAdPass_clicked(); break;
        case 4: _t->on_pushButton_modiStuP_clicked(); break;
        case 5: _t->on_pushButton_addGrade_clicked(); break;
        case 6: _t->on_pushButton_gradeShow_clicked(); break;
        case 7: _t->on_pushButton_modyInfo_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AdminScreen::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AdminScreen::backToLoginScreen)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject AdminScreen::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AdminScreen.data,
      qt_meta_data_AdminScreen,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AdminScreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AdminScreen::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AdminScreen.stringdata0))
        return static_cast<void*>(const_cast< AdminScreen*>(this));
    return QWidget::qt_metacast(_clname);
}

int AdminScreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void AdminScreen::backToLoginScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
