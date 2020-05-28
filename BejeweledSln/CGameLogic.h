#ifndef CGAMELOGIC_H
#define CGAMELOGIC_H

#include<stdio.h>
#include <cstdlib>
#include <ctime>
#include <string.h>

typedef struct zuobiao {
    int x;
    int y;
} Z;

class CGameLogic{
public:
    CGameLogic();

    static bool xiaoqu1(int num[][8]);
    static bool xiaoqu2(int num[][8]);
    bool jiaohuan1(int num[][8],Z z1,Z z2);
    bool jiaohuan2(int num[][8],Z z1,Z z2);
    void init(int num[][8]);
    bool all_cannot(int num[][8]);

};


#endif // CGAMELOGIC_H
