/********************************************************************************
** Form generated from reading UI file 'startlauncherwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARTLAUNCHERWINDOW_H
#define UI_STARTLAUNCHERWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_StartLauncherWindow
{
public:
    QWidget *centralwidget;
    QPushButton *selectFileButton;
    QPushButton *exitButton;
    QPushButton *aboutButton;
    QLabel *LimurLabel;
    QLineEdit *lineEdit;
    QPushButton *openButton;
    QPushButton *editButton;
    QPushButton *keysButton;

    void setupUi(QMainWindow *StartLauncherWindow)
    {
        if (StartLauncherWindow->objectName().isEmpty())
            StartLauncherWindow->setObjectName(QString::fromUtf8("StartLauncherWindow"));
        StartLauncherWindow->resize(514, 185);
        StartLauncherWindow->setAnimated(true);
        StartLauncherWindow->setUnifiedTitleAndToolBarOnMac(true);
        centralwidget = new QWidget(StartLauncherWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        selectFileButton = new QPushButton(centralwidget);
        selectFileButton->setObjectName(QString::fromUtf8("selectFileButton"));
        selectFileButton->setGeometry(QRect(390, 10, 111, 51));
        exitButton = new QPushButton(centralwidget);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(410, 150, 75, 23));
        aboutButton = new QPushButton(centralwidget);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));
        aboutButton->setGeometry(QRect(410, 110, 75, 23));
        LimurLabel = new QLabel(centralwidget);
        LimurLabel->setObjectName(QString::fromUtf8("LimurLabel"));
        LimurLabel->setGeometry(QRect(30, 10, 331, 101));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(false);
        font.setUnderline(false);
        font.setWeight(75);
        font.setStrikeOut(false);
        font.setKerning(true);
        font.setStyleStrategy(QFont::PreferAntialias);
        LimurLabel->setFont(font);
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 120, 321, 20));
        openButton = new QPushButton(centralwidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(100, 150, 75, 23));
        editButton = new QPushButton(centralwidget);
        editButton->setObjectName(QString::fromUtf8("editButton"));
        editButton->setGeometry(QRect(200, 150, 75, 23));
        keysButton = new QPushButton(centralwidget);
        keysButton->setObjectName(QString::fromUtf8("keysButton"));
        keysButton->setGeometry(QRect(410, 70, 75, 23));
        StartLauncherWindow->setCentralWidget(centralwidget);

        retranslateUi(StartLauncherWindow);

        QMetaObject::connectSlotsByName(StartLauncherWindow);
    } // setupUi

    void retranslateUi(QMainWindow *StartLauncherWindow)
    {
        StartLauncherWindow->setWindowTitle(QApplication::translate("StartLauncherWindow", "VRML - Browser \"Limur\"", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_STATUSTIP
        StartLauncherWindow->setStatusTip(QString());
#endif // QT_NO_STATUSTIP
        selectFileButton->setText(QApplication::translate("StartLauncherWindow", "Select File", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("StartLauncherWindow", "Exit", 0, QApplication::UnicodeUTF8));
        aboutButton->setText(QApplication::translate("StartLauncherWindow", "About", 0, QApplication::UnicodeUTF8));
        LimurLabel->setText(QString());
        openButton->setText(QApplication::translate("StartLauncherWindow", "Open", 0, QApplication::UnicodeUTF8));
        editButton->setText(QApplication::translate("StartLauncherWindow", "Edit", 0, QApplication::UnicodeUTF8));
        keysButton->setText(QApplication::translate("StartLauncherWindow", "Keys", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class StartLauncherWindow: public Ui_StartLauncherWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARTLAUNCHERWINDOW_H
