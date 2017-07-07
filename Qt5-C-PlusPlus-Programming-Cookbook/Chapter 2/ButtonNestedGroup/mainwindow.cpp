#include <QPropertyAnimation>
#include <QSequentialAnimationGroup>
#include <QParallelAnimationGroup>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPropertyAnimation *MyAnimation1 = new QPropertyAnimation (ui->Button1, "geometry");
    MyAnimation1->setDuration(5000);
    MyAnimation1->setStartValue(ui->Button1->geometry());
    MyAnimation1->setEndValue(QRect(200, 100, 50, 20));

    QPropertyAnimation *MyAnimation2 = new QPropertyAnimation (ui->Button2, "geometry");
    MyAnimation2->setDuration(5000);
    MyAnimation2->setStartValue(ui->Button2->geometry());
    MyAnimation2->setEndValue(QRect(200, 150, 50, 20));

    QPropertyAnimation *MyAnimation3 = new QPropertyAnimation (ui->Button3, "geometry");
    MyAnimation3->setDuration(5000);
    MyAnimation3->setStartValue(ui->Button3->geometry());
    MyAnimation3->setEndValue(QRect(200, 200, 50, 20));

    QPropertyAnimation *MyAnimation4 = new QPropertyAnimation (ui->Button4, "geometry");
    MyAnimation4->setDuration(5000);
    MyAnimation4->setStartValue(ui->Button4->geometry());
    MyAnimation4->setEndValue(QRect(400, 100, 50, 20));

    QPropertyAnimation *MyAnimation5 = new QPropertyAnimation (ui->Button5, "geometry");
    MyAnimation5->setDuration(5000);
    MyAnimation5->setStartValue(ui->Button5->geometry());
    MyAnimation5->setEndValue(QRect(400, 150, 50, 20));

    QPropertyAnimation *MyAnimation6 = new QPropertyAnimation (ui->Button6, "geometry");
    MyAnimation6->setDuration(5000);
    MyAnimation6->setStartValue(ui->Button6->geometry());
    MyAnimation6->setEndValue(QRect(400, 200, 50, 20));

    QEasingCurve curving;
    curving.setType(QEasingCurve::OutBounce);
    curving.setAmplitude(2);

    MyAnimation1->setEasingCurve(curving);
    MyAnimation2->setEasingCurve(curving);
    MyAnimation3->setEasingCurve(curving);
    MyAnimation4->setEasingCurve(curving);
    MyAnimation5->setEasingCurve(curving);
    MyAnimation6->setEasingCurve(curving);

    QParallelAnimationGroup *FirstGroup = new QParallelAnimationGroup;
    FirstGroup->addAnimation(MyAnimation1);
    FirstGroup->addAnimation(MyAnimation2);
    FirstGroup->addAnimation(MyAnimation3);

    QParallelAnimationGroup *SecondGroup = new QParallelAnimationGroup;
    SecondGroup->addAnimation(MyAnimation4);
    SecondGroup->addAnimation(MyAnimation5);
    SecondGroup->addAnimation(MyAnimation6);

    QSequentialAnimationGroup *AllGroups = new QSequentialAnimationGroup;
    AllGroups->addAnimation(FirstGroup);
    AllGroups->addAnimation(SecondGroup);
    AllGroups->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
