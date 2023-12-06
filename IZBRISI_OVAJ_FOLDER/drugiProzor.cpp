#include "drugiProzor.h"
#include "ui_drugiProzor.h"

DrugiProzor::DrugiProzor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui:: DrugiProzor)
{
    ui->setupUi(this);
    this->setWindowTitle("IGRAČ BROJ 2");

    ui ->stackedWidget ->setCurrentIndex(0);
    this->setFixedSize(800, 600);

    //Pozadina
    QLabel *background = new QLabel(this);
    QPixmap backgroundImage(":/imePrezime.jpeg");
    background->setPixmap(backgroundImage);
    background->setGeometry(0, 0, this->width(), this->height());
    background->setScaledContents(true);
    background->lower();
}

DrugiProzor::~DrugiProzor()
{
    delete ui;
}

void DrugiProzor::on_pbNazad2_clicked()
{
    close();
}

