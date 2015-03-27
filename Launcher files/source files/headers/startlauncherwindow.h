#ifndef STARTLAUNCHERWINDOW_H
#define STARTLAUNCHERWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include "ui_fileselectwindow.h"
#include "fileselectwindow.h"

class FileSelectWindow;

namespace Ui {
class StartLauncherWindow;
}

class StartLauncherWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit StartLauncherWindow(QWidget *parent = 0);
    ~StartLauncherWindow();

public slots:
    void OpenSelectWindow();
    void OpenAboutMessage();

private:
    Ui::StartLauncherWindow *ui;
    FileSelectWindow *fileSelectWindow;
};

#endif // STARTLAUNCHERWINDOW_H
