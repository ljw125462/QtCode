/****************************************************************************
** Meta object code from reading C++ file 'mapeditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../minimap/mapeditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mapeditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MapEditor_t {
    QByteArrayData data[20];
    char stringdata0[384];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MapEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MapEditor_t qt_meta_stringdata_MapEditor = {
    {
QT_MOC_LITERAL(0, 0, 9), // "MapEditor"
QT_MOC_LITERAL(1, 10, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 10), // "paintEvent"
QT_MOC_LITERAL(4, 44, 12), // "QPaintEvent*"
QT_MOC_LITERAL(5, 57, 15), // "mousePressEvent"
QT_MOC_LITERAL(6, 73, 12), // "QMouseEvent*"
QT_MOC_LITERAL(7, 86, 5), // "event"
QT_MOC_LITERAL(8, 92, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(9, 116, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(10, 140, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(11, 164, 23), // "on_pushButton_7_clicked"
QT_MOC_LITERAL(12, 188, 23), // "on_pushButton_6_clicked"
QT_MOC_LITERAL(13, 212, 23), // "on_pushButton_8_clicked"
QT_MOC_LITERAL(14, 236, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(15, 260, 23), // "on_pushButton_9_clicked"
QT_MOC_LITERAL(16, 284, 24), // "on_pushButton_10_clicked"
QT_MOC_LITERAL(17, 309, 24), // "on_pushButton_13_clicked"
QT_MOC_LITERAL(18, 334, 24), // "on_pushButton_12_clicked"
QT_MOC_LITERAL(19, 359, 24) // "on_pushButton_11_clicked"

    },
    "MapEditor\0on_pushButton_clicked\0\0"
    "paintEvent\0QPaintEvent*\0mousePressEvent\0"
    "QMouseEvent*\0event\0on_pushButton_2_clicked\0"
    "on_pushButton_3_clicked\0on_pushButton_4_clicked\0"
    "on_pushButton_7_clicked\0on_pushButton_6_clicked\0"
    "on_pushButton_8_clicked\0on_pushButton_5_clicked\0"
    "on_pushButton_9_clicked\0"
    "on_pushButton_10_clicked\0"
    "on_pushButton_13_clicked\0"
    "on_pushButton_12_clicked\0"
    "on_pushButton_11_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MapEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    1,   90,    2, 0x08 /* Private */,
       5,    1,   93,    2, 0x08 /* Private */,
       8,    0,   96,    2, 0x08 /* Private */,
       9,    0,   97,    2, 0x08 /* Private */,
      10,    0,   98,    2, 0x08 /* Private */,
      11,    0,   99,    2, 0x08 /* Private */,
      12,    0,  100,    2, 0x08 /* Private */,
      13,    0,  101,    2, 0x08 /* Private */,
      14,    0,  102,    2, 0x08 /* Private */,
      15,    0,  103,    2, 0x08 /* Private */,
      16,    0,  104,    2, 0x08 /* Private */,
      17,    0,  105,    2, 0x08 /* Private */,
      18,    0,  106,    2, 0x08 /* Private */,
      19,    0,  107,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
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

void MapEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MapEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 2: _t->mousePressEvent((*reinterpret_cast< QMouseEvent*(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_pushButton_4_clicked(); break;
        case 6: _t->on_pushButton_7_clicked(); break;
        case 7: _t->on_pushButton_6_clicked(); break;
        case 8: _t->on_pushButton_8_clicked(); break;
        case 9: _t->on_pushButton_5_clicked(); break;
        case 10: _t->on_pushButton_9_clicked(); break;
        case 11: _t->on_pushButton_10_clicked(); break;
        case 12: _t->on_pushButton_13_clicked(); break;
        case 13: _t->on_pushButton_12_clicked(); break;
        case 14: _t->on_pushButton_11_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MapEditor::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_MapEditor.data,
    qt_meta_data_MapEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MapEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MapEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MapEditor.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MapEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
