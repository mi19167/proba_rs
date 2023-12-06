#ifndef IGRAC1_H
#define IGRAC1_H


#include <QGraphicsRectItem>
#include <QObject>

class Igrac1 : public QObject, public QGraphicsRectItem
{
    Q_OBJECT

public:
    Igrac1();

public slots:
    void moveLeft();

private:
    bool tajmerPokrenut;
};

#endif // IGRAC1_H
