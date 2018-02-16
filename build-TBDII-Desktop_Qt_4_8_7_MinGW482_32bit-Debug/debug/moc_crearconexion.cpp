/****************************************************************************
** Meta object code from reading C++ file 'crearconexion.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TBDII/crearconexion.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'crearconexion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CrearConexion[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      37,   14,   14,   14, 0x08,
      62,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_CrearConexion[] = {
    "CrearConexion\0\0on_btnCrear_clicked()\0"
    "on_btnCancelar_clicked()\0"
    "on_btnProbar_clicked()\0"
};

void CrearConexion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CrearConexion *_t = static_cast<CrearConexion *>(_o);
        switch (_id) {
        case 0: _t->on_btnCrear_clicked(); break;
        case 1: _t->on_btnCancelar_clicked(); break;
        case 2: _t->on_btnProbar_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData CrearConexion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CrearConexion::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_CrearConexion,
      qt_meta_data_CrearConexion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CrearConexion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CrearConexion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CrearConexion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CrearConexion))
        return static_cast<void*>(const_cast< CrearConexion*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int CrearConexion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
