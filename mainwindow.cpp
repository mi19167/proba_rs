#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "drugiProzor.h"

#include <QGraphicsScene>
#include <QGraphicsView>
#include "igrac1.h"
#include <QMediaPlayer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui ->stackedWidget ->setCurrentIndex(0);
    this ->setWindowTitle("PINGVINI SA MADAGASKARA");
    this->setFixedSize(800, 600);

    //Pozadina
    QLabel *background = new QLabel(this);
    QPixmap backgroundImage(":/pozadina.jpg");
    background->setPixmap(backgroundImage);
    background->setGeometry(0, 0, this->width(), this->height());
    background->setScaledContents(true);
    background->lower();


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pbClose_clicked()
{
    close();
}


void MainWindow::on_pbStart_clicked()
{
    ui ->stackedWidget ->setCurrentIndex(3);

    this ->setWindowTitle("PODACI O IGRI");
    this->setFixedSize(800, 600);

    //Pozadina
    QPixmap newBackgroundPixmap(":/imePrezime.jpeg"); // Putanja do nove pozadinske slike

    // Prilagodite veličinu slike tako da odgovara veličini prozora
    newBackgroundPixmap = newBackgroundPixmap.scaled(this->size(), Qt::IgnoreAspectRatio);

    // Postavite sliku kao pozadinu (page_2)
    QPalette palette;
    palette.setBrush(QPalette::Background, newBackgroundPixmap);

    ui->page_3_imena->setAutoFillBackground(true);
    ui->page_3_imena->setPalette(palette);

    // Postavite veličinu stranice (page_2) da odgovara veličini prozora
    ui->page_3_imena->setFixedSize(this->size());

    //MUZIKA

    QMediaPlayer *music = new QMediaPlayer();
    music -> setMedia(QUrl("qrc:/muzikaZaIgru.mpga"));
    music -> play();
    music -> setVolume(1500);

}



void MainWindow::on_pbAbout_clicked()
{
    ui ->stackedWidget ->setCurrentIndex(1);
    //Pozadina

    this ->setWindowTitle("ABOUT GAME");
    this->setFixedSize(800, 600);

    //Pozadina
    QPixmap newBackgroundPixmap(":/ab_game3.jpg"); // Putanja do nove pozadinske slike

    // Prilagodite veličinu slike tako da odgovara veličini prozora
    newBackgroundPixmap = newBackgroundPixmap.scaled(this->size(), Qt::IgnoreAspectRatio);

    // Postavite sliku kao pozadinu (page_2)
    QPalette palette;
    palette.setBrush(QPalette::Background, newBackgroundPixmap);

    ui->page_2_about_game->setAutoFillBackground(true);
    ui->page_2_about_game->setPalette(palette);

    // Postavite veličinu stranice (page_2) da odgovara veličini prozora
    ui->page_2_about_game->setFixedSize(this->size());


}

void MainWindow::on_pbOK_clicked()
{
    ui ->stackedWidget ->setCurrentIndex(0);
}


void MainWindow::on_cbJedanIgrac_stateChanged(int arg1)
{
    // Otvaranje novog prozora
    DrugiProzor *igraProzor = new DrugiProzor(this);
    igraProzor->show();

}


void MainWindow::on_pbNazad_clicked()
{
    ui ->stackedWidget ->setCurrentIndex(0);

}




void MainWindow::on_pbStart2_clicked()
{
    ui ->stackedWidget ->setCurrentIndex(2);
}



