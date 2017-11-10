#include "settings.h"
#include "ui_settings.h"
#include "types.h"

Settings::Settings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings)
{
    ui->setupUi(this);
}

void Settings::SetCheckpoint()
{
    ui->setpointValue->setText(QString::number(Hacks::Get().GetSetPoint()) + ".0* C");
}

Settings::~Settings()
{
    delete ui;
}
