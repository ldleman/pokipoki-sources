/****************************************************************************
** Meta object code from reading C++ file 'javascript.h'
**
** Created: Mon 7. Apr 07:06:09 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../javascript.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'javascript.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Javascript[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x05,
      23,   11,   11,   11, 0x05,
      37,   11,   11,   11, 0x05,
      51,   11,   11,   11, 0x05,
      66,   11,   11,   11, 0x05,
      84,   80,   11,   11, 0x05,

 // methods: signature, parameters, type, tag, flags
     105,   11,   11,   11, 0x02,
     113,   11,   11,   11, 0x02,
     124,   11,   11,   11, 0x02,
     135,   11,   11,   11, 0x02,
     147,   11,   11,   11, 0x02,
     158,   80,   11,   11, 0x02,

       0        // eod
};

static const char qt_meta_stringdata_Javascript[] = {
    "Javascript\0\0closeApp()\0minimizeApp()\0"
    "maximizeApp()\0dragStartApp()\0dragStopApp()\0"
    "x,y\0dragMoveApp(int,int)\0close()\0"
    "maximize()\0minimize()\0dragStart()\0"
    "dragStop()\0dragMove(int,int)\0"
};

void Javascript::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        Javascript *_t = static_cast<Javascript *>(_o);
        switch (_id) {
        case 0: _t->closeApp(); break;
        case 1: _t->minimizeApp(); break;
        case 2: _t->maximizeApp(); break;
        case 3: _t->dragStartApp(); break;
        case 4: _t->dragStopApp(); break;
        case 5: _t->dragMoveApp((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->close(); break;
        case 7: _t->maximize(); break;
        case 8: _t->minimize(); break;
        case 9: _t->dragStart(); break;
        case 10: _t->dragStop(); break;
        case 11: _t->dragMove((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData Javascript::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject Javascript::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_Javascript,
      qt_meta_data_Javascript, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Javascript::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Javascript::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Javascript::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Javascript))
        return static_cast<void*>(const_cast< Javascript*>(this));
    return QObject::qt_metacast(_clname);
}

int Javascript::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Javascript::closeApp()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void Javascript::minimizeApp()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}

// SIGNAL 2
void Javascript::maximizeApp()
{
    QMetaObject::activate(this, &staticMetaObject, 2, 0);
}

// SIGNAL 3
void Javascript::dragStartApp()
{
    QMetaObject::activate(this, &staticMetaObject, 3, 0);
}

// SIGNAL 4
void Javascript::dragStopApp()
{
    QMetaObject::activate(this, &staticMetaObject, 4, 0);
}

// SIGNAL 5
void Javascript::dragMoveApp(int _t1, int _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
