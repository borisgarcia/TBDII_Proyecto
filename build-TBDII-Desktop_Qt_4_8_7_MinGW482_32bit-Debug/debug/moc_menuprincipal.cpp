/****************************************************************************
** Meta object code from reading C++ file 'menuprincipal.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TBDII/menuprincipal.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'menuprincipal.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MenuPrincipal[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   14,   14,   14, 0x08,
      39,   14,   14,   14, 0x08,
      65,   14,   14,   14, 0x08,
      87,   14,   14,   14, 0x08,
     110,   14,   14,   14, 0x08,
     136,   14,   14,   14, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_MenuPrincipal[] = {
    "MenuPrincipal\0\0on_pushButton_clicked()\0"
    "on_pushButton_2_clicked()\0"
    "on_btnCrear_clicked()\0on_btnListar_clicked()\0"
    "on_pushButton_3_clicked()\0"
    "on_btnCrear_2_clicked()\0"
};

void MenuPrincipal::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        MenuPrincipal *_t = static_cast<MenuPrincipal *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_pushButton_2_clicked(); break;
        case 2: _t->on_btnCrear_clicked(); break;
        case 3: _t->on_btnListar_clicked(); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_btnCrear_2_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData MenuPrincipal::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject MenuPrincipal::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MenuPrincipal,
      qt_meta_data_MenuPrincipal, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MenuPrincipal::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MenuPrincipal::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MenuPrincipal::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MenuPrincipal))
        return static_cast<void*>(const_cast< MenuPrincipal*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MenuPrincipal::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
