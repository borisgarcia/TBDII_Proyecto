/****************************************************************************
** Meta object code from reading C++ file 'newtable.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.7)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TBDII/newtable.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newtable.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.7. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_NewTable[] = {

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
      10,    9,    9,    9, 0x08,
      36,    9,    9,    9, 0x08,
      62,    9,    9,    9, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_NewTable[] = {
    "NewTable\0\0on_pushButton_6_clicked()\0"
    "on_pushButton_5_clicked()\0"
    "on_pushButton_4_clicked()\0"
};

void NewTable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        NewTable *_t = static_cast<NewTable *>(_o);
        switch (_id) {
        case 0: _t->on_pushButton_6_clicked(); break;
        case 1: _t->on_pushButton_5_clicked(); break;
        case 2: _t->on_pushButton_4_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObjectExtraData NewTable::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject NewTable::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_NewTable,
      qt_meta_data_NewTable, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &NewTable::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *NewTable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *NewTable::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_NewTable))
        return static_cast<void*>(const_cast< NewTable*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int NewTable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
