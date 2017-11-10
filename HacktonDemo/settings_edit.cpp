#include "settings_edit.h"
#include "ui_settings_edit.h"
#include "types.h"

Settings_Edit::Settings_Edit(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Settings_Edit)
{
    ui->setupUi(this);
}

void Settings_Edit::SetCheckpoint()
{
    ui->temp->setText(QString::number(Hacks::Get().GetSetPoint()) + ".0* C");
}

Settings_Edit::~Settings_Edit()
{
    delete ui;
}

void Settings_Edit::on_downArrow_clicked()
{
    Hacks::Get().DecSetPoint();
    Hacks::Get().DoSetcheckpoint();
}

void Settings_Edit::on_upArrow_clicked()
{
    Hacks::Get().IncSetPoint();
    Hacks::Get().DoSetcheckpoint();
}
