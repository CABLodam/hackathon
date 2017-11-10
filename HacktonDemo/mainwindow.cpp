#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "types.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    _ui(new Ui::MainWindow),
    _settings(new Settings),
    _overview(new Overview)
{
    _ui->setupUi(this);

    Q_ASSERT(Pages::Settings == 0);
    _ui->contentHolder->addWidget(_settings);

    Q_ASSERT(Pages::Overview == 1);
    _ui->contentHolder->addWidget(_overview);

    _ui->contentHolder->setCurrentIndex(Pages::Settings);
}

MainWindow::~MainWindow()
{    
    delete _ui;
}
