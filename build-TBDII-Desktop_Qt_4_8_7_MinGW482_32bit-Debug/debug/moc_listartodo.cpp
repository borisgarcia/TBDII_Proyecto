/****************************************************************************
** Meta object code from reading C++ file 'listartodo.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TBDII/listartodo.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'listartodo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_ListarTodo[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      12,   11,   11,   11, 0x08,
      35,   11,   11,   11, 0x08,
      60,   11,   11,   11, 0x08,
      85,   11,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_ListarTodo[] = {
    "ListarTodo\0\0on_btnBuscar_clicked()\0"
    "on_btnBuscar_2_clicked()\0"
    "on_btnBuscar_3_clicked()\0"
    "on_btnBuscar_4_clicked()\0"
};

void ListarTodo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        ListarTodo *_t = static_cast<ListarTodo *>(_o);
        switch (_id) {
        case 0: _t->on_btnBuscar_clicked(); break;
        case 1: _t->on_btnBuscar_2_clicked(); break;
        case 2: _t->on_btnBuscar_3_clicked(); break;
        case 3: _t->on_btnBuscar_4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData ListarTodo::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject ListarTodo::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_ListarTodo,
      qt_meta_data_ListarTodo, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &ListarTodo::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *ListarTodo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *ListarTodo::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_ListarTodo))
        return static_cast<void*>(const_cast< ListarTodo*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int ListarTodo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
