/****************************************************************************
** Meta object code from reading C++ file 'addtaskformweekly.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../05-tudu/tudu/headers/addtaskformweekly.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'addtaskformweekly.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AddTaskFormWeekly_t {
    QByteArrayData data[11];
    char stringdata0[128];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AddTaskFormWeekly_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AddTaskFormWeekly_t qt_meta_stringdata_AddTaskFormWeekly = {
    {
QT_MOC_LITERAL(0, 0, 17), // "AddTaskFormWeekly"
QT_MOC_LITERAL(1, 18, 14), // "sendToCalendar"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 5), // "Task*"
QT_MOC_LITERAL(4, 40, 4), // "task"
QT_MOC_LITERAL(5, 45, 3), // "row"
QT_MOC_LITERAL(6, 49, 6), // "column"
QT_MOC_LITERAL(7, 56, 4), // "span"
QT_MOC_LITERAL(8, 61, 20), // "sendDeleteToCalendar"
QT_MOC_LITERAL(9, 82, 21), // "on_pbSaveTask_clicked"
QT_MOC_LITERAL(10, 104, 23) // "on_pbDeleteTask_clicked"

    },
    "AddTaskFormWeekly\0sendToCalendar\0\0"
    "Task*\0task\0row\0column\0span\0"
    "sendDeleteToCalendar\0on_pbSaveTask_clicked\0"
    "on_pbDeleteTask_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AddTaskFormWeekly[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    4,   34,    2, 0x06 /* Public */,
       8,    2,   43,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   48,    2, 0x08 /* Private */,
      10,    0,   49,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::Int, QMetaType::Int, QMetaType::Int,    4,    5,    6,    7,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AddTaskFormWeekly::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AddTaskFormWeekly *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendToCalendar((*reinterpret_cast< Task*(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 1: _t->sendDeleteToCalendar((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_pbSaveTask_clicked(); break;
        case 3: _t->on_pbDeleteTask_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AddTaskFormWeekly::*)(Task * , int , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddTaskFormWeekly::sendToCalendar)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AddTaskFormWeekly::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AddTaskFormWeekly::sendDeleteToCalendar)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AddTaskFormWeekly::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_AddTaskFormWeekly.data,
    qt_meta_data_AddTaskFormWeekly,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AddTaskFormWeekly::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AddTaskFormWeekly::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AddTaskFormWeekly.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int AddTaskFormWeekly::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void AddTaskFormWeekly::sendToCalendar(Task * _t1, int _t2, int _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AddTaskFormWeekly::sendDeleteToCalendar(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
