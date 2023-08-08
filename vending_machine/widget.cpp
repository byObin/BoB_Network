// widget.cpp

#include "widget.h"
#include "ui_widget.h"
#include <QMessageBox>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    // Initially disable drink buttons
    ui->pbCoffee->setEnabled(false);
    ui->pbTea->setEnabled(false);
    ui->pbMilk->setEnabled(false);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::changeMoney(int diff)
{
    money += diff;

    ui->lcdNumber->display(money);
    // ui->pbCoffee->setEnabled(false);
}

void Widget::disactivateDrinkButton(int diff)
{
    if (money + diff > 100) {
        ui->pbCoffee->setEnabled(false);
        ui->pbTea->setEnabled(false);
        ui->pbMilk->setEnabled(false);
    } else {
        ui->pbCoffee->setEnabled(true);
        ui->pbTea->setEnabled(true);
        ui->pbMilk->setEnabled(true);
    }
}

void Widget::on_pb10_clicked()
{
    changeMoney(10);
}

void Widget::on_pb50_clicked()
{
    changeMoney(50);
}

void Widget::on_pb100_clicked()
{
    changeMoney(100);
}

void Widget::on_pb500_clicked()
{
    changeMoney(500);
}

void Widget::on_pbCoffee_clicked()
{
    changeMoney(-100);
}


void Widget::on_pbTea_clicked()
{
    changeMoney(-150);
}


void Widget::on_pbMilk_clicked()
{
    changeMoney(-200);
}

void Widget::on_pbRst_clicked()
{
    QMessageBox mb;
    mb.information(nullptr, "Title", "Text");
}
