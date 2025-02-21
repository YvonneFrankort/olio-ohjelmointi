#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_LisaaNappi_clicked()
{
//1. lue numero elementista
    QString str=ui->numeroNaytin->text();
    int num=str.toInt();
    qDebug()<<"Numero="<<num;

//2. kasvata numero yhdella
    num++;

//3. asetta numero takasisin elementiin
    qDebug()<<"Kasvatettu numero="<<num;
    QString uusStr=QString::number(num);
    ui->numeroNaytin->setText(uusStr);
}


void MainWindow::on_Reset_clicked()
{
//1. aseta nolla elementtiin
    //QString str=ui->numeroNaytin->text();
    //int num=str.toInt();
   // num=0;
   // qDebug()<<"Nollataan"<<num;
   // QString uusStr=QString::number(num);



}


void MainWindow::on_ResetNappi_clicked()
{
    ui->numeroNaytin->setText("0");
    qDebug()<<"Nollataan";
}

