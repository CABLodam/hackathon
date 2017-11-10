#include "overview.h"
#include "ui_overview.h"

Overview::Overview(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Overview)
{
    ui->setupUi(this);

    ui->topLeft->setText("5*C");
    ui->topRight->setText("0*C");
    ui->midLeft->setText("21*C");
    ui->midRight->setText("23*C");
    ui->fan->setText("75%");
    ui->botLeft->setText("1337");
    ui->botCenter->setText("22*C");
    ui->botRight->setText("RH: 57%");

}

Overview::~Overview()
{
    delete ui;
}
