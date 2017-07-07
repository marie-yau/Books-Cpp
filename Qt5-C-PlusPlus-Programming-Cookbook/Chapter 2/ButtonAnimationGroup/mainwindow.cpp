#include <QPropertyAnimation>
#include <QParallelAnimationGroup>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPropertyAnimation *FirstAnimation = new QPropertyAnimation(ui->FirstButton, "geometry");
    FirstAnimation->setDuration(5000);
    FirstAnimation->setStartValue(ui->FirstButton->geometry());
    FirstAnimation->setEndValue(QRect(400, 50, 60, 20));

    QPropertyAnimation *SecondAnimation = new QPropertyAnimation(ui->SecondButton, "geometry");
    SecondAnimation->setDuration(4000);
    SecondAnimation->setStartValue(ui->SecondButton->geometry());
    SecondAnimation->setEndValue(QRect(400, 100, 60, 20));

    QPropertyAnimation *ThirdAnimation = new QPropertyAnimation(ui->ThirdButton, "geometry");
    ThirdAnimation->setDuration(3000);
    ThirdAnimation->setStartValue(ui->ThirdButton->geometry());
    ThirdAnimation->setEndValue(QRect(400, 150, 60, 20));

    QEasingCurve MyCurve;
    MyCurve.setType(QEasingCurve::OutBounce);
    MyCurve.setAmplitude(0.5);
    MyCurve.setOvershoot(1.2);
    MyCurve.setPeriod(0.7);

    FirstAnimation->setEasingCurve(MyCurve);
    SecondAnimation->setEasingCurve(MyCurve);
    ThirdAnimation->setEasingCurve(MyCurve);

    QParallelAnimationGroup *MyGroup = new QParallelAnimationGroup;
    MyGroup->addAnimation(FirstAnimation);
    MyGroup->addAnimation(SecondAnimation);
    MyGroup->addAnimation(ThirdAnimation);

    MyGroup->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
