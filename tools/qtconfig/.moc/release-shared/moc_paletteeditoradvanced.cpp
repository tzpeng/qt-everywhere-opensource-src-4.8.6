/****************************************************************************
** Meta object code from reading C++ file 'paletteeditoradvanced.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../paletteeditoradvanced.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'paletteeditoradvanced.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_PaletteEditorAdvanced[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      23,   22,   22,   22, 0x09,
      44,   22,   22,   22, 0x09,
      59,   22,   22,   22, 0x09,
      73,   22,   22,   22, 0x09,
      96,   22,   22,   22, 0x09,
     118,   22,   22,   22, 0x09,
     145,   22,   22,   22, 0x09,
     173,   22,   22,   22, 0x09,

       0        // eod
};

static const char qt_meta_stringdata_PaletteEditorAdvanced[] = {
    "PaletteEditorAdvanced\0\0paletteSelected(int)\0"
    "onCentral(int)\0onEffect(int)\0"
    "onChooseCentralColor()\0onChooseEffectColor()\0"
    "onToggleBuildEffects(bool)\0"
    "onToggleBuildInactive(bool)\0"
    "onToggleBuildDisabled(bool)\0"
};

void PaletteEditorAdvanced::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        PaletteEditorAdvanced *_t = static_cast<PaletteEditorAdvanced *>(_o);
        switch (_id) {
        case 0: _t->paletteSelected((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->onCentral((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onEffect((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->onChooseCentralColor(); break;
        case 4: _t->onChooseEffectColor(); break;
        case 5: _t->onToggleBuildEffects((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->onToggleBuildInactive((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->onToggleBuildDisabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData PaletteEditorAdvanced::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject PaletteEditorAdvanced::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_PaletteEditorAdvanced,
      qt_meta_data_PaletteEditorAdvanced, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &PaletteEditorAdvanced::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *PaletteEditorAdvanced::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *PaletteEditorAdvanced::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_PaletteEditorAdvanced))
        return static_cast<void*>(const_cast< PaletteEditorAdvanced*>(this));
    return QDialog::qt_metacast(_clname);
}

int PaletteEditorAdvanced::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
