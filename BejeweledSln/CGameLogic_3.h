#ifndef CGAMELOGIC_3_H
#define CGAMELOGIC_3_H
#include<stdio.h>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include "CGameLogic.h"

class CGameLogic_3{
public:
    int kind;
    int red;
    int blue;

    CGameLogic_3();
    CGameLogic_3(int kindd);

    bool xiaoqu1(int num[][8]);
    int xiaoqu2(int num[][8]);
    int jiaohuan1(int num[][8],Z z1,Z z2);
    bool jiaohuan2(int num[][8],Z z1,Z z2);
    void init(int num[][8]);
    bool all_cannot(int num[][8]);
    void xiayi(int num[][8]) ;
    void tishi(int num[][8],Z &zo,Z &zt);

};
#endif // CGAMELOGIC_3_H
