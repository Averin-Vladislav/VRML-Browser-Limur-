#include "fileselectwindow.h"
#include "ui_fileselectwindow.h"

FileSelectWindow::FileSelectWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FileSelectWindow)
{
    ui->setupUi(this);

    model = new QDirModel;
    model->setReadOnly(false);
    ui->treeView->setModel(model);

    connect(ui->backButton, SIGNAL(clicked()), this, SLOT(OpenStartWindow()));
}

FileSelectWindow::~FileSelectWindow()
{
    delete ui;
}

void FileSelectWindow::OpenStartWindow()
{
    this->hide();
    startLauncherWindow = new StartLauncherWindow();
    startLauncherWindow->show();
}


