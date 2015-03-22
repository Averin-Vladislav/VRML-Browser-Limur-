#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <qdialog.h>
#include <qlabel.h>
#include <qlineedit.h>
#include <qcheckbox.h>
#include <qpushbutton.h>
#include <QHBoxLayout>
#include <QVBoxLayout>

class MyWindow : public QDialog
{
    Q_OBJECT

public:
    MyWindow(QWidget *parrent = 0);
    void Close();

private:
    QLabel *label;
    QLineEdit *line;
    QCheckBox *check_box1;
    QCheckBox *check_box2;
    QPushButton *ok;
    QPushButton *close;
};


#endif // MAINWINDOW_H
