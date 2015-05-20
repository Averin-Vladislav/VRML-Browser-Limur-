/****************************************************************************
** Meta object code from reading C++ file 'fileselectwindow.h'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VRML-Browser/fileselectwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileselectwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_FileSelectWindow[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      25,   18,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      50,   17,   17,   17, 0x0a,
      78,   72,   17,   17, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_FileSelectWindow[] = {
    "FileSelectWindow\0\0string\0"
    "signalThrowPath(QString)\0slotOpenStartWindow()\0"
    "index\0slotOnDoubleClicked(QModelIndex)\0"
};

void FileSelectWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        FileSelectWindow *_t = static_cast<FileSelectWindow *>(_o);
        switch (_id) {
        case 0: _t->signalThrowPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slotOpenStartWindow(); break;
        case 2: _t->slotOnDoubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData FileSelectWindow::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject FileSelectWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FileSelectWindow,
      qt_meta_data_FileSelectWindow, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &FileSelectWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *FileSelectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *FileSelectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileSelectWindow))
        return static_cast<void*>(const_cast< FileSelectWindow*>(this));
    return QDialog::qt_metacast(_clname);
}

int FileSelectWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void FileSelectWindow::signalThrowPath(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
