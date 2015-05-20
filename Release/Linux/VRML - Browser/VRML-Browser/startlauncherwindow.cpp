#include "startlauncherwindow.h"
#include "ui_startlauncherwindow.h"
#include <qmessagebox.h>

StartLauncherWindow::StartLauncherWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StartLauncherWindow)
{
    setWindowIcon(QIcon(":/home/vladislav-96/icon.png"));
    ui->setupUi(this);

    QPixmap pix("/home/vladislav-96/limur.png");
    ui->LimurLabel->setPixmap(pix);

    connect(ui->selectFileButton, SIGNAL(clicked()), this, SLOT(slotOpenSelectWindow()));
    connect(ui->aboutButton, SIGNAL(clicked()), this, SLOT(slotOpenAboutMessage()));
    connect(ui->keysButton, SIGNAL(clicked()), this, SLOT(slotOpenKeysMessage()));
    connect(ui->exitButton, SIGNAL(clicked()), this, SLOT(close()));
    connect(ui->openButton, SIGNAL(clicked()), this, SLOT(slotOpenFile()));
    connect(ui->editButton, SIGNAL(clicked()), this, SLOT(slotEditFile()));

    this->setFixedSize(this->size());
}

StartLauncherWindow::~StartLauncherWindow()
{
    delete ui;
}

void StartLauncherWindow::slotOpenSelectWindow()
{
    this->hide();
    fileSelectWindow = new FileSelectWindow();
    fileSelectWindow->show();
    connect(fileSelectWindow, SIGNAL(signalThrowPath(QString)), this, SLOT(slotGetPath(QString)));
}

void StartLauncherWindow::slotOpenAboutMessage()
{
    QString aboutString = "VRML - Browser 'Limur'\nVersion: 1.0\nAverinVladislav\n\n 2015";
    QMessageBox  aboutMessage;
    aboutMessage.setText(aboutString);
    aboutMessage.exec();
}

void StartLauncherWindow::slotOpenKeysMessage()
{
    QString keysString = "Key assignment:\n\n"
                         "1/3           Rotation in the XZ-plane\n"
                         "4/6           Rotation in ZY-plane\n"
                         "7/9           Rotation in the XY-plane\n"
                         "UP/DOWN       Movement relative to Z\n"
                         "LEFT/RIGHT    Movement relative to Y\n"
                         "+/-           Zoom in/Zoom out\n"
                         "Esc           Exit";
    QMessageBox keysMessage;
    keysMessage.setText(keysString);
    keysMessage.exec();
}

void StartLauncherWindow::slotGetPath(QString filePath)
{
    ui->lineEdit->setText(filePath);
    fileSelectWindow->hide();
    this->show();
    filePath_ = filePath;
}

void StartLauncherWindow::slotEditFile()
{
    #ifdef WIN32
        QProcess::execute("notepad.exe " + filePath_);
    #else
        QProcess::execute("gedit " + filePath_);
    #endif
}

void StartLauncherWindow::slotOpenFile()
{
    #ifdef WIN32
        QDesktopServices::openUrl(QUrl::fromUserInput(filePath_));
    #else
    QProcess program;
    QString str = "/home/vladislav-96/Browserfiles/limur";
    program.start(str, QStringList() << filePath_);
    program.waitForFinished();
    program.close();
    #endif
}
