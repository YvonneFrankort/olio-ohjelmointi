#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tila=1;
    setActiveControls();

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_add_clicked()
{
    if(tila==3){

    QString num1Str=ui->num1->text();
    int num1=num1Str.toInt();

    QString num2Str=ui->num2->text();
    int num2=num2Str.toInt();

    int result=num1+num2;
    qDebug()<<"Add:"<<result<<"="<<num1<<"+"<<num2;

    QString resStr=QString::number(result);
    ui->result->setText(resStr);

    tila=1;
   /* ui->num1->setEnabled(true);
    ui->num2->setEnabled(false);
    ui->result->setEnabled(false);
    ui->add->setEnabled(false);*/

    qDebug()<<"Laskun jalkeen tila"<<tila;

    }else{
        qDebug()<<"numbers are missing";

}
}

void MainWindow::on_sub_clicked()
{
    if(tila==3){

    QString num1Str=ui->num1->text();
    int num1=num1Str.toInt();

    QString num2Str=ui->num2->text();
    int num2=num2Str.toInt();

    int result=num1-num2;
    qDebug()<<"Sub:"<<result<<"="<<num1<<"-"<<num2;

    QString resStr=QString::number(result);
    ui->result->setText(resStr);

    tila=1;
    qDebug()<<"Laskun jalkeen tila"<<tila;

    }else{
    qDebug()<<"numbers are missing";

}
}

void MainWindow::on_mul_clicked()
{
    if(tila==3){

    QString num1Str=ui->num1->text();
    int num1=num1Str.toInt();

    QString num2Str=ui->num2->text();
    int num2=num2Str.toInt();

    int result=num1*num2;
    qDebug()<<"Mul:"<<result<<"="<<num1<<"*"<<num2;

    QString resStr=QString::number(result);
    ui->result->setText(resStr);

    tila=1;
    qDebug()<<"Laskun jalkeen tila"<<tila;
    }else{
        qDebug()<<"numbers are missing";

    }
}


void MainWindow::on_div_clicked()
{
    if(tila==3){

    QString num1Str=ui->num1->text();
    int num1=num1Str.toInt();

    QString num2Str=ui->num2->text();
    int num2=num2Str.toInt();

    int result=num1/num2;
    qDebug()<<"Div:"<<result<<"="<<num1<<"/"<<num2;

    QString resStr=QString::number(result);
    ui->result->setText(resStr);

    tila=1;
    qDebug()<<"Laskun jalkeen tila"<<tila;
}else{
    qDebug()<<"numbers are missing";

}
}


void MainWindow::on_clear_clicked()
{
    ui->num1->clear();
    ui->num2->clear();
    ui->result->clear();
    tila=1;
    setActiveControls();

}


void MainWindow::on_enter_clicked()
{
//tila 1: syota numero 1
//tila 2: syota numero 2
//tila 3: laske tulos
// pala takaisin tila 1

    if(tila>3){
    tila=3;
    }else{
    tila ++;
    }
    qDebug()<<"Go to state"<<tila;
    setActiveControls();

}

void MainWindow::setActiveControls()
{
    //kayttoliityman elementien aktivointi
    if(tila==1){
        ui->num1->setEnabled(true);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
    }else if(tila==2){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(true);
        ui->result->setEnabled(false);
        ui->add->setEnabled(false);
        ui->sub->setEnabled(false);
        ui->mul->setEnabled(false);
        ui->div->setEnabled(false);
    }else if(tila==3){
        ui->num1->setEnabled(false);
        ui->num2->setEnabled(false);
        ui->result->setEnabled(true);
        ui->add->setEnabled(true);
        ui->sub->setEnabled(true);
        ui->mul->setEnabled(true);
        ui->div->setEnabled(true);
    }
}

void MainWindow::on_N1_clicked()
{
    QString str=ui->N1->text();
    int n=str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N2_clicked()
{
    QString str=ui->N2->text();
    int n=str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N3_clicked()
{
    QString str=ui->N3->text();
    int n=str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N4_clicked()
{
    QString str=ui->N4->text();
    int n=str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N5_clicked()
{
    QString str=ui->N5->text();
    int n=str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N6_clicked()
{
    QString str=ui->N6->text();
    int n=str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N7_clicked()
{
    QString str=ui->N7->text();
    int n=str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N8_clicked()
{
    QString str=ui->N8->text();
    int n=str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N9_clicked()
{
    QString str=ui->N9->text();
    int n=str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_N0_clicked()
{
    QString str=ui->N0->text();
    int n=str.toInt();
    numberClickHandler(n);
}

void MainWindow::numberClickHandler(int n)
{
    qDebug()<<"Number pressed="<<n;

    QString uusiStr=QString::number(n);

    if(tila==1){
        qDebug()<<"Elemet number1";
        //aseta n -> num1
        ui->num1->setText(uusiStr);

    }else if(tila==2){
        qDebug()<<"Element number2";
        //aseta n -> num2
        ui->num2->setText(uusiStr);
    }
}



