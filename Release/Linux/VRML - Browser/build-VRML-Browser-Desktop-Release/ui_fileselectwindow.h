/********************************************************************************
** Form generated from reading UI file 'fileselectwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESELECTWINDOW_H
#define UI_FILESELECTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>

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
            FileSelectWindow->setObjectName(QStringLiteral("FileSelectWindow"));
        FileSelectWindow->resize(418, 342);
        gridLayout_3 = new QGridLayout(FileSelectWindow);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        treeView = new QTreeView(FileSelectWindow);
        treeView->setObjectName(QStringLiteral("treeView"));

        horizontalLayout->addWidget(treeView);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalSpacer = new QSpacerItem(17, 258, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        backButton = new QPushButton(FileSelectWindow);
        backButton->setObjectName(QStringLiteral("backButton"));

        verticalLayout->addWidget(backButton);


        horizontalLayout->addLayout(verticalLayout);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalSpacer = new QSpacerItem(233, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 0, 1, 1, 1);

        label = new QLabel(FileSelectWindow);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setFamily(QStringLiteral("Impact"));
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
        FileSelectWindow->setWindowTitle(QApplication::translate("FileSelectWindow", "File Selection", 0));
        backButton->setText(QApplication::translate("FileSelectWindow", "Back", 0));
        label->setText(QApplication::translate("FileSelectWindow", "Select VRML-file to open", 0));
    } // retranslateUi

};

namespace Ui {
    class FileSelectWindow: public Ui_FileSelectWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESELECTWINDOW_H
