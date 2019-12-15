#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>
#include <QString>
#include <string>
#include <cstring>
#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include "operations.h"

using namespace std;

operations obj;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("C@!cu!@t0r");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton1_clicked()
{
    ui->lineEdit->insert("1");
}

void MainWindow::on_pushButton2_clicked()
{
    ui->lineEdit->insert("2");
}

void MainWindow::on_pushButton3_clicked()
{
    ui->lineEdit->insert("3");
}

void MainWindow::on_pushButton4_clicked()
{
    ui->lineEdit->insert("4");
}

void MainWindow::on_pushButton5_clicked()
{
    ui->lineEdit->insert("5");
}

void MainWindow::on_pushButton6_clicked()
{
    ui->lineEdit->insert("6");
}

void MainWindow::on_pushButton7_clicked()
{
    ui->lineEdit->insert("7");
}

void MainWindow::on_pushButton8_clicked()
{
    ui->lineEdit->insert("8");
}

void MainWindow::on_pushButton9_clicked()
{
    ui->lineEdit->insert("9");
}

void MainWindow::on_pushButton0_clicked()
{
    ui->lineEdit->insert("0");
}


void MainWindow::on_pushButtonClear_clicked()
{
    ui->lineEdit->clear();
    obj.firstOperator = "";
    obj.secondOperator = "";
}

void MainWindow::onClickFunctionalities(char oper)
{
    if(obj.firstOperator.empty())
    {
        obj.firstOperator = ui->lineEdit->text().toStdString();
        obj._operator = oper;
    }
    else
    {
        obj.secondOperator = ui->lineEdit->text().toStdString();
        obj.firstOperator = obj.operate(obj.firstOperator, obj.secondOperator, obj._operator);
        obj._operator = oper;
        if(!obj.firstOperator.compare("Invalid"))
        {
            QMessageBox::information(this,"ERROR!!","Divide by zero is not possible");
            obj.firstOperator = "";
            obj.secondOperator = "";
        }
    }
    ui->lineEdit->clear();
}

void MainWindow::on_pushButtonPlus_clicked()
{
    onClickFunctionalities('+');
    QMessageBox::information(this,"Entered Text",QString::fromStdString(obj.firstOperator));
}

void MainWindow::on_pushButtonMinus_clicked()
{
    onClickFunctionalities('-');
    QMessageBox::information(this,"Entered Text",QString::fromStdString(obj.firstOperator));
}

void MainWindow::on_pushButtonStar_clicked()
{
    onClickFunctionalities('*');
    QMessageBox::information(this,"Entered Text",QString::fromStdString(obj.firstOperator));
}

void MainWindow::on_pushButtonDiv_clicked()
{
    onClickFunctionalities('/');
    QMessageBox::information(this,"Entered Text",QString::fromStdString(obj.firstOperator));
}

void MainWindow::on_pushButtonEquals_clicked()
{
    obj.secondOperator = ui->lineEdit->text().toStdString();

    if(obj.firstOperator.empty())
    {
        ui->lineEdit->setText(QString::fromStdString(obj.secondOperator));
    }
    else
    {
        string res = obj.operate(obj.firstOperator , obj.secondOperator, obj._operator );
        if(!res.compare("Invalid"))
        {
            QMessageBox::information(this,"ERROR!!","Divide by zero is not possible");
        }
        else
        {
            ui->lineEdit->setText(QString::fromStdString(res));
        }
    }

    obj.firstOperator = "";
    obj.secondOperator = "";

}
