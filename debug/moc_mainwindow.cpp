/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun 18. May 17:43:39 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x0a,
      54,   11,   11,   11, 0x0a,

 // methods: signature, parameters, type, tag, flags
      74,   11,   11,   11, 0x02,
      82,   11,   11,   11, 0x02,
      93,   11,   11,   11, 0x02,
     104,   11,   11,   11, 0x02,
     114,   11,   11,   11, 0x02,
     126,   11,   11,   11, 0x02,
     141,  137,   11,   11, 0x02,
     175,  167,  159,   11, 0x02,
     200,  192,   11,   11, 0x02,
     220,  216,  159,   11, 0x02,
     252,  237,   11,   11, 0x02,
     295,  286,  159,   11, 0x02,
     321,  137,   11,   11, 0x02,
     354,  341,   11,   11, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0mainFrame_javaScriptWindowObjectCleared()\0"
    "applicationClosed()\0close()\0maximize()\0"
    "minimize()\0restore()\0dragStart()\0"
    "dragStop()\0x,y\0dragMove(int,int)\0"
    "QString\0command\0execute(QString)\0"
    "message\0notify(QString)\0key\0"
    "getInfo(QString)\0path,key,value\0"
    "registry(QString,QString,QString)\0"
    "path,key\0registry(QString,QString)\0"
    "moveWindow(int,int)\0width,height\0"
    "resizeWindow(int,int)\0"
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
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

const QMetaObjectExtraData MainWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
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
    }
    return _id;
}
QT_END_MOC_NAMESPACE
