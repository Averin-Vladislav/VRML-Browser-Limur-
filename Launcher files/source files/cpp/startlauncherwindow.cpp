#include "startlauncherwindow.h"
#include "ui_startlauncherwindow.h"
#include <qmessagebox.h>

StartLauncherWindow::StartLauncherWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::StartLauncherWindow)
{
    ui->setupUi(this);

    QPixmap pix("C:/Users/lenovo/Documents/GUI-Designer/resourses/limur.png");
    ui->LimurLabel->setPixmap(pix);


    connect(ui->selectFileButton, SIGNAL(clicked()), this, SLOT(OpenSelectWindow()));
    connect(ui->aboutButton, SIGNAL(clicked()), this, SLOT(OpenAboutMessage()));
    connect(ui->exitButton, SIGNAL(clicked()), this, SLOT(close()));

    this->setFixedSize(this->size());
}

StartLauncherWindow::~StartLauncherWindow()
{
    delete ui;
}

void StartLauncherWindow::OpenSelectWindow()
{
    this->hide();
    fileSelectWindow = new FileSelectWindow();
    fileSelectWindow->show();
}

void StartLauncherWindow::OpenAboutMessage()
{
    QString aboutString = "VRML - Browser 'Limur'\nVersion: 0.1\nAverinVladislav\n\n 2015";
    QMessageBox  aboutMessage;
    aboutMessage.setText(aboutString);
    aboutMessage.exec();
}
