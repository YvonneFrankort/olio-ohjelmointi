#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_playerButton1_clicked();

    void on_playerButton2_clicked();

    void on_timeButton1_clicked();

    void on_timeButton2_clicked();

    void on_startButton_clicked();

    void on_stopButton_clicked();

    void updateProgressBar();




private:
    Ui::MainWindow *ui;

    int player1Time;
    int player2Time;
    int currentPlayer =1;
    int gameTime =0;

    QTimer *timer= nullptr;

    void setGameInfoText(QString, short);

    int tila=1;


};
#endif // MAINWINDOW_H
