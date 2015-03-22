#include "MyWindow.h"
#include <QApplication>
#include <qspinbox.h>
#include <qslider.h>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MyWindow *window = new MyWindow;
    window->show();

    return a.exec();
}
