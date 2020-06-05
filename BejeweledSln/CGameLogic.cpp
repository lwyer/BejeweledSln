#include"CGameLogic.h"

CGameLogic::CGameLogic(){

}

CGameLogic::CGameLogic(int kindd){
    this->kind=kindd;
}

bool CGameLogic::xiaoqu1(int num[][8]) {//鐢ㄤ簬鍒ゆ柇鏄惁鏈夊彲娑堝幓鐨勪綅缃?骞朵笉鐪熺殑娑堝幓 杩斿洖false涓烘棤鍙秷鍘荤殑
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

bool CGameLogic::xiaoqu2(int num[][8]) {//鐢ㄤ簬浜ゆ崲鍚庢秷鍘诲疂鐭?
    srand((int)time(NULL));//瀹氫箟绉嶅瓙 鏈夌殑鍦版柟闇€瑕侀噸鏂扮敓鎴愬疂鐭?
    int n=0;
    int i,j,m;
    Z z[64];//瀛樺偍闇€瑕佹秷鍘荤殑瀹濈煶鐨勪綅缃?
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
        for(u=0; u<n; u++) {//鍏堝皢娑堝幓浣嶇疆绫诲瀷鏇存敼涓?
            num[z[u].x][z[u].y]=0;
        }
        for(i=7; i>=0; i--) {
            for(j=0; j<8; j++) {
                if(num[i][j]==0) {//鍐嶅皢0鐨勪綅缃悜涓婂鎵捐ˉ榻?
                    v=i;
                    while(num[v][j]==0&&v>0) {
                        v--;
                    }
                    num[i][j]=num[v][j];
                    num[v][j]=0;
                }
            }
        }
        for(i=0; i<8; i++) {//杩樻槸0鐨勪綅缃殢鏈虹敓鎴愭柊鐨勫疂鐭崇被鍨?
            for(j=0; j<8; j++) {
                if(num[i][j]==0) {
                    num[i][j]=rand()%this->kind+1;
                }
            }
        }

    }
    return result;
}

bool CGameLogic::jiaohuan1(int num[][8],Z z1,Z z2) {//浜ゆ崲瀹濈煶浣嶇疆 鐪熺殑浜ゆ崲
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

bool CGameLogic::jiaohuan2(int num[][8],Z z1,Z z2) {//鐢ㄤ簬鍒ゆ柇鏄惁瀹屽叏鏃犳硶浜ゆ崲 骞朵笉鏄湡鐨勪氦鎹?
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
        n=num[z1.x][z1.y];//鎹㈠洖鍘熸潵鐨勪綅缃?
        num[z1.x][z1.y]=num[z2.x][z2.y];
        num[z2.x][z2.y]=n;
    } else {
        result=false;
    }
    return result;
}

void CGameLogic::init(int num[][8]) {//鍒濆鍖?
    srand((int)time(NULL));  // 浜х敓闅忔満绉嶅瓙
    int i,j;
    for (i = 0; i < 8; i++) {
        for(j=0; j<8; j++) {
            num[i][j]=rand()%this->kind+1;
        }
    }
    while(xiaoqu1(num)) {//鐩村埌鐢熸垚娌℃湁鏄笁涓繛缁殑
        for (i = 0; i < 8; i++) {
            for(j=0; j<8; j++) {
                num[i][j]=rand()%this->kind+1;
            }
        }
    }
}

bool CGameLogic::all_cannot(int num[][8]) {//鍒ゆ柇浠讳綍浜ゆ崲閮芥棤娉曡繘琛?false涓烘湁浜ゆ崲鍙繘琛?true涓烘棤浜ゆ崲鍙繘琛?
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
