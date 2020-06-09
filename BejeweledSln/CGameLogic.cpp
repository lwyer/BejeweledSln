#include"CGameLogic.h"

CGameLogic::CGameLogic(){

}

CGameLogic::CGameLogic(int kindd){
    this->kind=kindd;
}

bool CGameLogic::xiaoqu1(int num[][8]) {
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

int CGameLogic::xiaoqu2(int num[][8]) {
 srand((int)time(NULL));
 int n=0;
 int i,j,m;
 Z z[64];
 bool result=false;
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
  for(u=0; u<n; u++) {
   num[z[u].x][z[u].y]=0;
  }
//  for(i=7; i>=0; i--) {
//   for(j=0; j<8; j++) {
//    if(num[i][j]==0) {
//     v=i;
//     while(num[v][j]==0&&v>0) {
//      v--;
//     }
//     num[i][j]=num[v][j];
//     num[v][j]=0;
//    }
//   }
//  }
//  for(i=0; i<8; i++) {
//   for(j=0; j<8; j++) {
//    if(num[i][j]==0) {
//     num[i][j]=rand()%6+1;
//    }
//   }
//  }

 }
 return n;
}

void CGameLogic::xiayi(int num[][8])
{
 int i,j,v;
 for(i=7; i>=0; i--) {
  for(j=0; j<8; j++) {
   if(num[i][j]==0) {
    v=i;
    while(num[v][j]==0&&v>0) {
     v--;
    }
    num[i][j]=num[v][j];
    num[v][j]=0;
   }
  }
 }
 for(i=0; i<8; i++) {
  for(j=0; j<8; j++) {
   if(num[i][j]==0) {
    num[i][j]=rand()%kind+1;
   }
  }
 }
}

int CGameLogic::jiaohuan1(int num[][8],Z z1,Z z2) {
 int result=0;
 if(((z1.x==z2.x+1||z1.x==z2.x-1)&&(z1.y==z2.y))
         ||((z1.y==z2.y-1||z1.y==z2.y+1)&&(z1.x==z2.x))) {
  int n;
  n=num[z1.x-1][z1.y-1];
  num[z1.x-1][z1.y-1]=num[z2.x-1][z2.y-1];
  num[z2.x-1][z2.y-1]=n;
  result=xiaoqu2(num);
  if(result!=0) {
   return result;
  } else {
   result=0;
   n=num[z1.x-1][z1.y-1];
   num[z1.x-1][z1.y-1]=num[z2.x-1][z2.y-1];
   num[z2.x-1][z2.y-1]=n;
  }
 } else {
  result=0;
 }
 return result;
}

bool CGameLogic::jiaohuan2(int num[][8],Z z1,Z z2) {
 bool result=false;
 if(((z1.x==z2.x+1||z1.x==z2.x-1)&&(z1.y==z2.y))
         ||((z1.y==z2.y-1||z1.y==z2.y+1)&&(z1.x==z2.x))) {
  int n;
  n=num[z1.x-1][z1.y-1];
  num[z1.x-1][z1.y-1]=num[z2.x-1][z2.y-1];
  num[z2.x-1][z2.y-1]=n;
  if(xiaoqu1(num)) {
   result=true;
  } else {
   result=false;
  }
  n=num[z1.x-1][z1.y-1];
  num[z1.x-1][z1.y-1]=num[z2.x-1][z2.y-1];
  num[z2.x-1][z2.y-1]=n;
 } else {
  result=false;
 }
 return result;
}

void CGameLogic::init(int num[][8]) {
    srand((int)time(NULL));
    int i,j;
    for (i = 0; i < 8; i++) {
        for(j=0; j<8; j++) {
            num[i][j]=rand()%this->kind+1;
        }
    }
    while(xiaoqu1(num)) {
        for (i = 0; i < 8; i++) {
            for(j=0; j<8; j++) {
                num[i][j]=rand()%this->kind+1;
            }
        }
    }
}

bool CGameLogic::all_cannot(int num[][8]) {
    int i,j;
    bool result=true;
    for(i=1; i<9; i++) {
        for(j=1; j<9; j++) {
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

void CGameLogic::tishi(int num[][8],Z &zo,Z &zt) {
 int i,j;
 for(i=1; i<8; i++) {
  for(j=1; j<8; j++) {
   Z z1,z2,z3;
   z1.x=i;
   z1.y=j;
   z2.x=i;
   z2.y=j+1;
   z3.x=i+1;
   z3.y=j;
   if(jiaohuan2(num,z1,z2)) {
    zo=z1;
    zt=z2;
    return;
   }else if(jiaohuan2(num,z1,z3)){
    zo=z1;
    zt=z3;
    return;
   }
  }
 }
}
