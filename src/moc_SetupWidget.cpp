/****************************************************************************
** Meta object code from reading C++ file 'SetupWidget.h'
**
** Created: Wed Mar 28 21:35:54 2007
**      by: The Qt Meta Object Compiler version 59 (Qt 4.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "SetupWidget.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SetupWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 59
#error "This file was generated using the moc from 4.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

static const uint qt_meta_data_SetupWidget[] = {

 // content:
       1,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   10, // methods
       0,    0, // properties
       0,    0, // enums/sets

 // slots: signature, parameters, type, tag, flags
      13,   12,   12,   12, 0x0a,
      28,   22,   12,   12, 0x08,
      44,   22,   12,   12, 0x08,
      64,   22,   12,   12, 0x08,
      86,   22,   12,   12, 0x08,
     115,   22,   12,   12, 0x08,
     139,   22,   12,   12, 0x08,
     162,   22,   12,   12, 0x08,
     190,   22,   12,   12, 0x08,
     212,   22,   12,   12, 0x08,
     233,   22,   12,   12, 0x08,
     255,   22,   12,   12, 0x08,
     278,   12,   12,   12, 0x08,
     292,   12,   12,   12, 0x08,
     306,   12,   12,   12, 0x08,
     323,  315,   12,   12, 0x08,
     342,   12,   12,   12, 0x08,
     352,   12,   12,   12, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_SetupWidget[] = {
    "SetupWidget\0\0update()\0value\0setIvySize(int)\0setIvyLeafSize(int)\0"
    "setIvyBranchSize(int)\0setBranchingProbability(int)\0"
    "setLeafProbability(int)\0setMaxFloatLength(int)\0"
    "setMaxAdhesionDistance(int)\0setPrimaryWeight(int)\0"
    "setRandomWeight(int)\0setGravityWeight(int)\0setAdhesionWeight(int)\0"
    "onImportObj()\0onExportObj()\0onGrow()\0checked\0onToggleGrow(bool)\0"
    "onBirth()\0onFlipNormals()\0"
};

const QMetaObject SetupWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SetupWidget,
      qt_meta_data_SetupWidget, 0 }
};

const QMetaObject *SetupWidget::metaObject() const
{
    return &staticMetaObject;
}

void *SetupWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_SetupWidget))
	return static_cast<void*>(const_cast<SetupWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int SetupWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: update(); break;
        case 1: setIvySize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: setIvyLeafSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: setIvyBranchSize((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: setBranchingProbability((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: setLeafProbability((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: setMaxFloatLength((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: setMaxAdhesionDistance((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: setPrimaryWeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: setRandomWeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: setGravityWeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 11: setAdhesionWeight((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: onImportObj(); break;
        case 13: onExportObj(); break;
        case 14: onGrow(); break;
        case 15: onToggleGrow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 16: onBirth(); break;
        case 17: onFlipNormals(); break;
        }
        _id -= 18;
    }
    return _id;
}
