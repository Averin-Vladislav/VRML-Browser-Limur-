/****************************************************************************
** Meta object code from reading C++ file 'fileselectwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.2.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../VRML-Browser/fileselectwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'fileselectwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.2.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_FileSelectWindow_t {
    QByteArrayData data[7];
    char stringdata[88];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    offsetof(qt_meta_stringdata_FileSelectWindow_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData) \
    )
static const qt_meta_stringdata_FileSelectWindow_t qt_meta_stringdata_FileSelectWindow = {
    {
QT_MOC_LITERAL(0, 0, 16),
QT_MOC_LITERAL(1, 17, 15),
QT_MOC_LITERAL(2, 33, 0),
QT_MOC_LITERAL(3, 34, 6),
QT_MOC_LITERAL(4, 41, 19),
QT_MOC_LITERAL(5, 61, 19),
QT_MOC_LITERAL(6, 81, 5)
    },
    "FileSelectWindow\0signalThrowPath\0\0"
    "string\0slotOpenStartWindow\0"
    "slotOnDoubleClicked\0index\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSelectWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a,
       5,    1,   33,    2, 0x0a,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,    6,

       0        // eod
};

void FileSelectWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FileSelectWindow *_t = static_cast<FileSelectWindow *>(_o);
        switch (_id) {
        case 0: _t->signalThrowPath((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->slotOpenStartWindow(); break;
        case 2: _t->slotOnDoubleClicked((*reinterpret_cast< QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (FileSelectWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&FileSelectWindow::signalThrowPath)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject FileSelectWindow::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_FileSelectWindow.data,
      qt_meta_data_FileSelectWindow,  qt_static_metacall, 0, 0}
};


const QMetaObject *FileSelectWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSelectWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_FileSelectWindow.stringdata))
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
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
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
