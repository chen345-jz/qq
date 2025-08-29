/****************************************************************************
** Meta object code from reading C++ file 'chatpage.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../chatpage.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chatpage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChatPage_t {
    QByteArrayData data[16];
    char stringdata0[173];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ChatPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ChatPage_t qt_meta_stringdata_ChatPage = {
    {
QT_MOC_LITERAL(0, 0, 8), // "ChatPage"
QT_MOC_LITERAL(1, 9, 17), // "onMsgFromMainPage"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 4), // "data"
QT_MOC_LITERAL(4, 33, 5), // "curId"
QT_MOC_LITERAL(5, 39, 8), // "senderId"
QT_MOC_LITERAL(6, 48, 10), // "onSendText"
QT_MOC_LITERAL(7, 59, 9), // "onSendImg"
QT_MOC_LITERAL(8, 69, 11), // "onSendShake"
QT_MOC_LITERAL(9, 81, 10), // "onSendFile"
QT_MOC_LITERAL(10, 92, 12), // "onScreenShot"
QT_MOC_LITERAL(11, 105, 15), // "onConnectToHost"
QT_MOC_LITERAL(12, 121, 11), // "onConnected"
QT_MOC_LITERAL(13, 133, 8), // "friendId"
QT_MOC_LITERAL(14, 142, 15), // "onConnectFailed"
QT_MOC_LITERAL(15, 158, 14) // "checkHeartTime"

    },
    "ChatPage\0onMsgFromMainPage\0\0data\0curId\0"
    "senderId\0onSendText\0onSendImg\0onSendShake\0"
    "onSendFile\0onScreenShot\0onConnectToHost\0"
    "onConnected\0friendId\0onConnectFailed\0"
    "checkHeartTime"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChatPage[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    3,   64,    2, 0x0a /* Public */,
       6,    0,   71,    2, 0x08 /* Private */,
       7,    0,   72,    2, 0x08 /* Private */,
       8,    0,   73,    2, 0x08 /* Private */,
       9,    0,   74,    2, 0x08 /* Private */,
      10,    0,   75,    2, 0x08 /* Private */,
      11,    0,   76,    2, 0x08 /* Private */,
      12,    1,   77,    2, 0x08 /* Private */,
      14,    1,   80,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,

       0        // eod
};

void ChatPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->onMsgFromMainPage((*reinterpret_cast< const QByteArray(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 1: _t->onSendText(); break;
        case 2: _t->onSendImg(); break;
        case 3: _t->onSendShake(); break;
        case 4: _t->onSendFile(); break;
        case 5: _t->onScreenShot(); break;
        case 6: _t->onConnectToHost(); break;
        case 7: _t->onConnected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->onConnectFailed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->checkHeartTime(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ChatPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ChatPage.data,
    qt_meta_data_ChatPage,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ChatPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChatPage.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ChatPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
