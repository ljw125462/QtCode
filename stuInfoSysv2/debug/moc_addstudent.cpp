/****************************************************************************
** Meta object code from reading C++ file 'addstudent.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../addstudent.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addstudent.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_AddStudent_t {
    QByteArrayData data[11];
    char stringdata0[233];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddStudent_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddStudent_t qt_meta_stringdata_AddStudent = {
    {
QT_MOC_LITERAL(0, 0, 10), // "AddStudent"
QT_MOC_LITERAL(1, 11, 17), // "backToAdminScreen"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 40), // "on_comboBox_province_currentI..."
QT_MOC_LITERAL(4, 71, 5), // "index"
QT_MOC_LITERAL(5, 77, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(6, 101, 28), // "on_pushButton_submit_clicked"
QT_MOC_LITERAL(7, 130, 39), // "on_comboBox_college_currentIn..."
QT_MOC_LITERAL(8, 170, 26), // "on_comboBox_city_activated"
QT_MOC_LITERAL(9, 197, 4), // "arg1"
QT_MOC_LITERAL(10, 202, 30) // "on_comboBox_province_activated"

    },
    "AddStudent\0backToAdminScreen\0\0"
    "on_comboBox_province_currentIndexChanged\0"
    "index\0on_pushButton_2_clicked\0"
    "on_pushButton_submit_clicked\0"
    "on_comboBox_college_currentIndexChanged\0"
    "on_comboBox_city_activated\0arg1\0"
    "on_comboBox_province_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddStudent[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x08 /* Private */,
       5,    0,   53,    2, 0x08 /* Private */,
       6,    0,   54,    2, 0x08 /* Private */,
       7,    1,   55,    2, 0x08 /* Private */,
       8,    1,   58,    2, 0x08 /* Private */,
      10,    1,   61,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,    4,

       0        // eod
};

void AddStudent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        AddStudent *_t = static_cast<AddStudent *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->backToAdminScreen(); break;
        case 1: _t->on_comboBox_province_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_pushButton_submit_clicked(); break;
        case 4: _t->on_comboBox_college_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_comboBox_city_activated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_comboBox_province_activated((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (AddStudent::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&AddStudent::backToAdminScreen)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject AddStudent::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_AddStudent.data,
      qt_meta_data_AddStudent,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *AddStudent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddStudent::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_AddStudent.stringdata0))
        return static_cast<void*>(const_cast< AddStudent*>(this));
    return QWidget::qt_metacast(_clname);
}

int AddStudent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void AddStudent::backToAdminScreen()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
