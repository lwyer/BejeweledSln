#include"CGameLogic.h"

CGameLogic::CGameLogic(){

}

bool CGameLogic::xiaoqu1(int num[][8]) {//用于判断是否有可消去的位置 并不真的消去 返回false为无可消去的
    int i,j;
    int result=false;
    for(i=0; i<8; i++) {
        for(j=0; j<8; j++) {
            int k=j+1;
            if(k<8) {
                for(; k<8; k++) {
                    if(num[i][j]!=num[i][k]) {
                        break;
                    }
                }
                if(k-j>=3) {
                    result=true;
                }
            }
            k=i+1;
            if(k<8) {
                for(; k<8; k++) {
                    if(num[i][j]!=num[k][j]) {
                        break;
                    }
                }
                if(k-i>=3) {
                    result=true;
                }
            }
        }
    }
    return result;
}

bool CGameLogic::xiaoqu2(int num[][8]) {//用于交换后消去宝石
    srand((int)time(NULL));//定义种子 有的地方需要重新生成宝石
    int n=0;
    int i,j,m;
    Z z[64];//存储需要消去的宝石的位置
    int result=false;
    for(i=0; i<8; i++) {
        for(j=0; j<8; j++) {
            int k=j+1;
            if(k<8) {
                for(; k<8; k++) {
                    if(num[i][j]!=num[i][k]) {
                        break;
                    }
                }
                if(k-j>=3) {
                    result=true;
                    for(m=j; m<k; m++) {
                        Z z1;
                        z1.x=i;
                        z1.y=m;
                        z[n]=z1;
                        n++;
                    }
                }
            }
            k=i+1;
            if(k<8) {
                for(; k<8; k++) {
                    if(num[i][j]!=num[k][j]) {
                        break;
                    }
                }
                if(k-i>=3) {
                    result=true;
                    for(m=i; m<k; m++) {
                        Z z1;
                        z1.x=m;
                        z1.y=j;
                        z[n]=z1;
                        n++;
                    }
                }
            }
        }
    }
    if(result) {
        int u,v;
        for(u=0; u<n; u++) {//先将消去位置类型更改为0
            num[z[u].x][z[u].y]=0;
        }
        for(i=7; i>=0; i--) {
            for(j=0; j<8; j++) {
                if(num[i][j]==0) {//再将0的位置向上寻找补齐
                    v=i;
                    while(num[v][j]==0&&v>0) {
                        v--;
                    }
                    num[i][j]=num[v][j];
                    num[v][j]=0;
                }
            }
        }
        for(i=0; i<8; i++) {//还是0的位置随机生成新的宝石类型
            for(j=0; j<8; j++) {
                if(num[i][j]==0) {
                    num[i][j]=rand()%6+1;
                }
            }
        }

    }
    return result;
}

bool CGameLogic::jiaohuan1(int num[][8],Z z1,Z z2) {//交换宝石位置 真的交换
    bool result=false;
    if(((z1.x==z2.x+1||z1.x==z2.x-1)&&(z1.y==z2.y))
            ||((z1.y==z2.y-1||z1.y==z2.y+1)&&(z1.x==z2.x))) {
        int n;
        n=num[z1.x-1][z1.y-1];
        num[z1.x-1][z1.y-1]=num[z2.x-1][z2.y-1];
        num[z2.x-1][z2.y-1]=n;
        if(xiaoqu2(num)) {
            result=true;
        } else {
            result=false;
            n=num[z1.x-1][z1.y-1];
            num[z1.x-1][z1.y-1]=num[z2.x-1][z2.y-1];
            num[z2.x-1][z2.y-1]=n;
        }
    } else {
        result=false;
    }
    return result;
}

bool CGameLogic::jiaohuan2(int num[][8],Z z1,Z z2) {//用于判断是否完全无法交换 并不是真的交换
    bool result=false;
    if(((z1.x==z2.x+1||z1.x==z2.x-1)&&(z1.y==z2.y))
            ||((z1.y==z2.y-1||z1.y==z2.y+1)&&(z1.x==z2.x))) {
        int n;
        n=num[z1.x][z1.y];
        num[z1.x][z1.y]=num[z2.x][z2.y];
        num[z2.x][z2.y]=n;
        if(xiaoqu1(num)) {
            result=true;
        } else {
            result=false;
        }
        n=num[z1.x][z1.y];//换回原来的位置
        num[z1.x][z1.y]=num[z2.x][z2.y];
        num[z2.x][z2.y]=n;
    } else {
        result=false;
    }
    return result;
}

void CGameLogic::init(int num[][8]) {//初始化
    srand((int)time(NULL));  // 产生随机种子
    int i,j;
    for (i = 0; i < 8; i++) {
        for(j=0; j<8; j++) {
            num[i][j]=rand()%6+1;
        }
    }
    while(xiaoqu1(num)) {//直到生成没有是三个连续的
        for (i = 0; i < 8; i++) {
            for(j=0; j<8; j++) {
                num[i][j]=rand()%6+1;
            }
        }
    }
}

bool CGameLogic::all_cannot(int num[][8]) {//判断任何交换都无法进行 false为有交换可进行 true为无交换可进行
    int i,j;
    bool result=true;
    for(i=0; i<7; i++) {
        for(j=0; j<7; j++) {
            Z z1,z2,z3;
            z1.x=i;
            z1.y=j;
            z2.x=i;
            z2.y=j+1;
            z3.x=i+1;
            z3.y=j;
            if(jiaohuan2(num,z1,z2)||jiaohuan2(num,z1,z3)) {
                result=false;
            }
        }
    }
    return result;
}
