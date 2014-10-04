/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.3.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.3.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[26];
    char stringdata[234];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10),
QT_MOC_LITERAL(1, 11, 39),
QT_MOC_LITERAL(2, 51, 0),
QT_MOC_LITERAL(3, 52, 17),
QT_MOC_LITERAL(4, 70, 5),
QT_MOC_LITERAL(5, 76, 8),
QT_MOC_LITERAL(6, 85, 8),
QT_MOC_LITERAL(7, 94, 7),
QT_MOC_LITERAL(8, 102, 9),
QT_MOC_LITERAL(9, 112, 8),
QT_MOC_LITERAL(10, 121, 8),
QT_MOC_LITERAL(11, 130, 1),
QT_MOC_LITERAL(12, 132, 1),
QT_MOC_LITERAL(13, 134, 7),
QT_MOC_LITERAL(14, 142, 7),
QT_MOC_LITERAL(15, 150, 6),
QT_MOC_LITERAL(16, 157, 7),
QT_MOC_LITERAL(17, 165, 7),
QT_MOC_LITERAL(18, 173, 3),
QT_MOC_LITERAL(19, 177, 8),
QT_MOC_LITERAL(20, 186, 4),
QT_MOC_LITERAL(21, 191, 5),
QT_MOC_LITERAL(22, 197, 10),
QT_MOC_LITERAL(23, 208, 12),
QT_MOC_LITERAL(24, 221, 5),
QT_MOC_LITERAL(25, 227, 6)
    },
    "MainWindow\0mainFrame_javaScriptWindowObjectCleared\0"
    "\0applicationClosed\0close\0maximize\0"
    "minimize\0restore\0dragStart\0dragStop\0"
    "dragMove\0x\0y\0execute\0command\0notify\0"
    "message\0getInfo\0key\0registry\0path\0"
    "value\0moveWindow\0resizeWindow\0width\0"
    "height"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   94,    2, 0x0a /* Public */,
       3,    0,   95,    2, 0x0a /* Public */,

 // methods: name, argc, parameters, tag, flags
       4,    0,   96,    2, 0x02 /* Public */,
       5,    0,   97,    2, 0x02 /* Public */,
       6,    0,   98,    2, 0x02 /* Public */,
       7,    0,   99,    2, 0x02 /* Public */,
       8,    0,  100,    2, 0x02 /* Public */,
       9,    0,  101,    2, 0x02 /* Public */,
      10,    2,  102,    2, 0x02 /* Public */,
      13,    1,  107,    2, 0x02 /* Public */,
      15,    1,  110,    2, 0x02 /* Public */,
      17,    1,  113,    2, 0x02 /* Public */,
      19,    3,  116,    2, 0x02 /* Public */,
      19,    2,  123,    2, 0x02 /* Public */,
      22,    2,  128,    2, 0x02 /* Public */,
      23,    2,  133,    2, 0x02 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::QString, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::QString, QMetaType::QString,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   20,   18,   21,
    QMetaType::QString, QMetaType::QString, QMetaType::QString,   20,   18,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   24,   25,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        switch (_id) {
        case 0: _t->mainFrame_javaScriptWindowObjectCleared(); break;
        case 1: _t->applicationClosed(); break;
        case 2: _t->close(); break;
        case 3: _t->maximize(); break;
        case 4: _t->minimize(); break;
        case 5: _t->restore(); break;
        case 6: _t->dragStart(); break;
        case 7: _t->dragStop(); break;
        case 8: _t->dragMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: { QString _r = _t->execute((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 10: _t->notify((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 11: { QString _r = _t->getInfo((*reinterpret_cast< QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 12: _t->registry((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 13: { QString _r = _t->registry((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 14: _t->moveWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 15: _t->resizeWindow((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
