#include <QStateMachine>
#include <QEventTransition>
#include <QPropertyAnimation>
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QStateMachine *MyMachine = new QStateMachine(this);

    QState *FirstAnimal = new QState();
    FirstAnimal->assignProperty(ui->label, "text", "Dog");
    QState *SecondAnimal = new QState();
    SecondAnimal->assignProperty(ui->label, "text", "Cat");
    QState *ThirdAnimal = new QState();
    ThirdAnimal->assignProperty(ui->label, "text", "Rabbit");

    QEventTransition *FirstTran = new QEventTransition(ui->StateButton, QEvent::MouseButtonPress);
    FirstTran->setTargetState(SecondAnimal);
    FirstAnimal->addTransition(FirstTran);
    QEventTransition *SecondTran = new QEventTransition(ui->StateButton, QEvent::MouseButtonPress);
    SecondTran->setTargetState(ThirdAnimal);
    SecondAnimal->addTransition(SecondTran);
    QEventTransition *ThirdTran = new QEventTransition(ui->StateButton, QEvent::MouseButtonPress);
    ThirdTran->setTargetState(FirstAnimal);
    ThirdAnimal->addTransition(ThirdTran);

    MyMachine->addState(FirstAnimal);
    MyMachine->addState(SecondAnimal);
    MyMachine->addState(ThirdAnimal);
    MyMachine->setInitialState(FirstAnimal);
    MyMachine->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
