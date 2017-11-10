#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "types.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //ui->content->setCurrentIndex(Pages::Overview);
}

MainWindow::~MainWindow()
{
    delete ui;
}
