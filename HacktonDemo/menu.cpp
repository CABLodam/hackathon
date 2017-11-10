#include "menu.h"
#include "ui_menu.h"
#include "types.h"

Menu::Menu(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Menu)
{
    ui->setupUi(this);
}

Menu::~Menu()
{
    delete ui;
}

void Menu::on_settingsLink_clicked()
{
    Hacks::Get().GetContentHolder()->setCurrentIndex(Pages::Settings);
}

void Menu::on_settingsEditLink_clicked()
{
    Hacks::Get().GetContentHolder()->setCurrentIndex(Pages::Settings_Edit);
}

void Menu::on_overviewLink_clicked()
{
    Hacks::Get().GetContentHolder()->setCurrentIndex(Pages::Overview);
}
