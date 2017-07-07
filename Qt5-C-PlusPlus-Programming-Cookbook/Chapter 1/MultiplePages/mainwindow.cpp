#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->page1Button->setProperty("pageNumberMatches", true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tabWidget_currentChanged(int index)
{
    ui->page1Button->setProperty("pageNumberMatches", false);
    ui->page2Button->setProperty("pageNumberMatches", false);
    ui->page3Button->setProperty("pageNumberMatches", false);

    if(index == 0)
        ui->page1Button->setProperty("pageNumberMatches", true);
    else if(index == 1)
        ui->page2Button->setProperty("pageNumberMatches", true);
    else
        ui->page3Button->setProperty("pageNumberMatches", true);

    ui->page1Button->style()->polish(ui->page1Button);
    ui->page2Button->style()->polish(ui->page2Button);
    ui->page3Button->style()->polish(ui->page3Button);
}
