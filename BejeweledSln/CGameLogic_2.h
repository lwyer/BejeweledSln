#ifndef CGAMELOGIC_2_H
#define CGAMELOGIC_2_H

#include<stdio.h>
#include <cstdlib>
#include <ctime>
#include <string.h>
#include "CGameLogic.h"

class CGameLogic_2
{
public:
    CGameLogic_2();
    CGameLogic_2(int kindd);
    int kind;

    bool xiaoqu1(int num[][8]);
    int xiaoqu2(int num[][8]);
    void init(int num[][8]);
    void xiayi(int num[][8]) ;

    int wanfa2_jiaohuan1(int num[][8],Z z);
    bool wanfa2_jiaohuan2(int num[][8],Z z);
    bool wanfa2_all_cannot(int num[][8]);
};

#endif // CGAMELOGIC_2_H
