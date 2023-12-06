#include "mainwindow.h"

#include <QApplication>
#include <QLabel>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;

    w.setStyleSheet("background-image: url(qrc:/../Desktop/pingvini/pozadina.png); background-position: center;"
                    "background-repeat: no-repeat");

    w.show();

    return a.exec();
}
