#include "mylabel.h"

Mylabel::Mylabel(int x, int y, int xpos, int ypos, std::string path, QWidget* parent)
    :QLabel(parent)
{
    this->x = x;
    this->y = y;
    this->xpos = xpos;
    this->ypos = ypos;
    this->path = path;
}


