/****************************************************************************
** Meta object code from reading C++ file 'gensrcwnd.h'
**
** Created: Wed Jan 15 14:14:49 2014
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../GenSRC/gensrcwnd.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gensrcwnd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_GenSrcWnd[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x08,
      23,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_GenSrcWnd[] = {
    "GenSrcWnd\0\0genCFiles()\0genCppFiles()\0"
};

void GenSrcWnd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        GenSrcWnd *_t = static_cast<GenSrcWnd *>(_o);
        switch (_id) {
        case 0: _t->genCFiles(); break;
        case 1: _t->genCppFiles(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData GenSrcWnd::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject GenSrcWnd::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_GenSrcWnd,
      qt_meta_data_GenSrcWnd, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &GenSrcWnd::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *GenSrcWnd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *GenSrcWnd::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_GenSrcWnd))
        return static_cast<void*>(const_cast< GenSrcWnd*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int GenSrcWnd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
