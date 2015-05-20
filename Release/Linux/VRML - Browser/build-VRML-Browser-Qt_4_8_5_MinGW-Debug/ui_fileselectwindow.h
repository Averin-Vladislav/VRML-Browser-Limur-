/********************************************************************************
** Form generated from reading UI file 'fileselectwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESELECTWINDOW_H
#define UI_FILESELECTWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_FileSelectWindow
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QTreeView *treeView;
    QVBoxLayout *verticalLayout;
    QSpacerItem *verticalSpacer;
    QPushButton *backButton;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;

    void setupUi(QDialog *FileSelectWindow)
    {
        if (FileSelectWindow->objectName().isEmpty())
            FileSelectWindow->setObjectName(QString::fromUtf8("FileSelectWindow"));
        FileSelectWindow->resize(418, 342);
        gridLayout_3 = new QGridLayout(FileSelectWindow);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        treeView = new QTreeView(FileSelectWindow);
        treeView->setObjectName(QString::fromUtf8("treeView"));

        horizontalLayout->addWidget(treeView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalSpacer = new QSpacerItem(17, 258, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        backButton = new QPushButton(FileSelectWindow);
        backButton->setObjectName(QString::fromUtf8("backButton"));

        verticalLayout->addWidget(backButton);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(233, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        label = new QLabel(FileSelectWindow);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setFamily(QString::fromUtf8("Impact"));
        font.setPointSize(11);
        font.setItalic(false);
        font.setUnderline(false);
        label->setFont(font);

        gridLayout_2->addWidget(label, 0, 0, 1, 1);


        gridLayout->addLayout(gridLayout_2, 0, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(FileSelectWindow);

        QMetaObject::connectSlotsByName(FileSelectWindow);
    } // setupUi

    void retranslateUi(QDialog *FileSelectWindow)
    {
        FileSelectWindow->setWindowTitle(QApplication::translate("FileSelectWindow", "File Selection", 0, QApplication::UnicodeUTF8));
        backButton->setText(QApplication::translate("FileSelectWindow", "Back", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("FileSelectWindow", "Select VRML-file to open", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class FileSelectWindow: public Ui_FileSelectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESELECTWINDOW_H
