/****************************************************************************
** Meta object code from reading C++ file 'startlauncherwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VRML-Browser/startlauncherwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'startlauncherwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_StartLauncherWindow[] = {

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
      21,   20,   20,   20, 0x08,
      44,   20,   20,   20, 0x08,
      67,   20,   20,   20, 0x08,
      98,   89,   20,   20, 0x08,
     119,   20,   20,   20, 0x08,
     134,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_StartLauncherWindow[] = {
    "StartLauncherWindow\0\0slotOpenSelectWindow()\0"
    "slotOpenAboutMessage()\0slotOpenKeysMessage()\0"
    "filePath\0slotGetPath(QString)\0"
    "slotOpenFile()\0slotEditFile()\0"
};

void StartLauncherWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        StartLauncherWindow *_t = static_cast<StartLauncherWindow *>(_o);
        switch (_id) {
        case 0: _t->slotOpenSelectWindow(); break;
        case 1: _t->slotOpenAboutMessage(); break;
        case 2: _t->slotOpenKeysMessage(); break;
        case 3: _t->slotGetPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->slotOpenFile(); break;
        case 5: _t->slotEditFile(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData StartLauncherWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject StartLauncherWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_StartLauncherWindow,
      qt_meta_data_StartLauncherWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &StartLauncherWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *StartLauncherWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *StartLauncherWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_StartLauncherWindow))
        return static_cast<void*>(const_cast< StartLauncherWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int StartLauncherWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
