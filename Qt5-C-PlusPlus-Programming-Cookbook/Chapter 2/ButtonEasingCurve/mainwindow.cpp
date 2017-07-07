#include <QPropertyAnimation>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPropertyAnimation *MyAnimation = new QPropertyAnimation (ui->MyButton, "geometry");
    MyAnimation->setDuration(5000);
    MyAnimation->setStartValue(ui->MyButton->geometry());
    MyAnimation->setEndValue(QRect(300, 300, 50, 20));

    QEasingCurve curving;
    curving.setType(QEasingCurve::OutBounce);
    curving.setAmplitude(2);
    MyAnimation->setEasingCurve(curving);
    MyAnimation->setLoopCount(4);

    MyAnimation->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
