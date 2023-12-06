#include "igrac1.h"
#include <QKeyEvent>

Igrac1::Igrac1()
{
    setRect(0, 0, 50, 50);
}

void Igrac1::moveLeft()
{
    setPos(x() - 10, y());
}
