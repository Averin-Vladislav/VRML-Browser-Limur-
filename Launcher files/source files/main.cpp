#include "mainwindow.h"
#include <QApplication>
#include <qlabel.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel main_label("Hello World!");
    main_label.show();

    return a.exec();
}
