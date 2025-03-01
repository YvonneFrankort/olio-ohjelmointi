#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTimer>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tila= 1;
    timer = nullptr;

    setGameInfoText("Select playtime and press START!", 12);
}

MainWindow::~MainWindow()
{
    if (timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}


void MainWindow::on_playerButton1_clicked()
{
    currentPlayer=2;//switch to player 2
}


void MainWindow::on_playerButton2_clicked()
{
    currentPlayer=1;//switch to player 1
}


void MainWindow::on_timeButton1_clicked()
{
    gameTime = 120; //first time 120 seconds
    setGameInfoText("Ready to play", 12);
}


void MainWindow::on_timeButton2_clicked()
{
    gameTime = 300; //second time is 300 secondes= 5 min
    setGameInfoText("Ready to play", 12);
}


void MainWindow::on_startButton_clicked()
{
    //gameTime = 10;//testataan
    player1Time = gameTime;
    player2Time = gameTime;
    currentPlayer = 1;

    ui->progressBar1->setRange(0, gameTime);
    ui->progressBar_2->setRange(0, gameTime);
    ui->progressBar1->setValue(gameTime);
    ui->progressBar_2->setValue(gameTime);

    setGameInfoText("Game ongoing", 15);


    timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updateProgressBar);
    timer->setInterval(1000); //1000 ms = 1s
    timer->start();
}


void MainWindow::on_stopButton_clicked()
{
    if (timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    setGameInfoText("New game via START button", 12);
}

void MainWindow::updateProgressBar()
{
    if (currentPlayer==1){
    player1Time = player1Time -1;
    ui->progressBar1->setValue(player1Time);

    if (player1Time <=0){
        timer ->stop();
        setGameInfoText("Player 2 won!", 12);
    }
    }else{
        player2Time = player2Time -1;
        ui->progressBar_2->setValue(player2Time);

        if (player2Time <=0){
            timer ->stop();
            setGameInfoText("Player 1 won!", 12);
        }
    }
}

void MainWindow::setGameInfoText(QString text, short fontSize)
    {

        QFont font = ui->label->font();
        font.setPointSize(fontSize);

        ui->label->setText(text);
        ui->label->setFont(font);
    }


