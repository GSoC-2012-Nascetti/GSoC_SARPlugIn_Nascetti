/****************************************************************************
** Meta object code from reading C++ file 'Ortho_GUI.h'
**
** Created: Tue 31. Jul 14:51:46 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../application/PlugIns/src/Tutorial/Ortho_GUI.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Ortho_GUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Ortho_GUI[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      24,   10,   10,   10, 0x0a,
      37,   10,   10,   10, 0x0a,
      50,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Ortho_GUI[] = {
    "Ortho_GUI\0\0StartOrtho()\0CheckImage()\0"
    "CheckModel()\0ComputeGrid()\0"
};

const QMetaObject Ortho_GUI::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Ortho_GUI,
      qt_meta_data_Ortho_GUI, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Ortho_GUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Ortho_GUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Ortho_GUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Ortho_GUI))
        return static_cast<void*>(const_cast< Ortho_GUI*>(this));
    return QDialog::qt_metacast(_clname);
}

int Ortho_GUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: StartOrtho(); break;
        case 1: CheckImage(); break;
        case 2: CheckModel(); break;
        case 3: ComputeGrid(); break;
        default: ;
        }
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
