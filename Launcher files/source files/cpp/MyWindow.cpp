#include "MyWindow.h"

MyWindow::MyWindow(QWidget *parrent) : QDialog(parrent)
{
    label = new QLabel("Enter");
    line = new QLineEdit;

    check_box1 = new QCheckBox("Upper case");
    check_box2 = new QCheckBox("Inversion");

    ok = new QPushButton("OK");
    close = new QPushButton("CLOSE");

    QHBoxLayout *layout = new QHBoxLayout;
    layout->addWidget(label);
    layout->addWidget(line);

    QVBoxLayout *right = new QVBoxLayout;
    right->addLayout(layout);
    right->addWidget(check_box1);
    right->addWidget(check_box2);

    QVBoxLayout *left = new QVBoxLayout;
    left->addWidget(ok);
    left->addWidget(close);

    QHBoxLayout *main = new QHBoxLayout;
    main->addLayout(right);
    main->addLayout(left);

    this->setLayout(main);
}
