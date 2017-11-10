#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "types.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    _ui(new Ui::MainWindow),
    _settings(new Settings),
    _settingsEdit(new Settings_Edit),
    _overview(new Overview),
    _menu(new Menu)
{
    _ui->setupUi(this);

    Hacks::Get().SetContentHolder(_ui->contentHolder);
    Hacks::Get().AddSetCheckpoint(_settings);
    Hacks::Get().AddSetCheckpoint(_settingsEdit);

    Hacks::Get().DoSetcheckpoint();

    Q_ASSERT(Pages::Settings == 0);
    _ui->contentHolder->addWidget(_settings);

    Q_ASSERT(Pages::Settings_Edit == 1);
    _ui->contentHolder->addWidget(_settingsEdit);

    Q_ASSERT(Pages::Overview == 2);
    _ui->contentHolder->addWidget(_overview);

    Q_ASSERT(Pages::Menu == 3);
    _ui->contentHolder->addWidget(_menu);

    _ui->contentHolder->setCurrentIndex(Pages::Menu);
}

MainWindow::~MainWindow()
{    
    delete _ui;
}

void MainWindow::on_pushButton_clicked()
{
    Hacks::Get().GetContentHolder()->setCurrentIndex(Pages::Menu);
}
