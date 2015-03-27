#ifndef FILESELECTWINDOW_H
#define FILESELECTWINDOW_H

#include <QDialog>
#include <QtCore>
#include <QtGui>
#include "ui_startlauncherwindow.h"
#include "startlauncherwindow.h"

class StartLauncherWindow;

namespace Ui {
class FileSelectWindow;
}

class FileSelectWindow : public QDialog
{
    Q_OBJECT

public:
    explicit FileSelectWindow(QWidget *parent = 0);
    ~FileSelectWindow();

public slots:
    void OpenStartWindow();

private:
    Ui::FileSelectWindow *ui;
    QDirModel *model;
    StartLauncherWindow *startLauncherWindow;
};

#endif // FILESELECTWINDOW_H
