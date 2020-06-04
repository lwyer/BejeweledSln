#ifndef MYLABEL_H
#define MYLABEL_H

#include <QLabel>

class Mylabel:public QLabel
{
    Q_OBJECT
public:
    Mylabel(int x, int y, int xpos, int ypos, std::string path, QWidget *parent=0);
    ~Mylabel(){}
    int x;
    int y;
    int xpos;
    int ypos;
    std::string path;
};

#endif // MYLABEL_H
