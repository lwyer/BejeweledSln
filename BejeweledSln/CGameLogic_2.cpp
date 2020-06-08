#include "CGameLogic_2.h"

CGameLogic_2::CGameLogic_2()
{

}

CGameLogic_2::CGameLogic_2(int kindd)
{
    kind = kindd;
}

bool CGameLogic_2::xiaoqu1(int num[][8]) {
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

int CGameLogic_2::xiaoqu2(int num[][8]) {
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

void CGameLogic_2::xiayi(int num[][8])
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

void CGameLogic_2::init(int num[][8]) {
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

int CGameLogic_2::wanfa2_jiaohuan1(int num[][8],Z z) {
 int a,b,c,d,result;
 result=0;
 if(z.x<=7&&z.y<=7) {
  a=num[z.x-1][z.y-1];
  b=num[z.x-1][z.y];
  c=num[z.x][z.y];
  d=num[z.x][z.y-1];

  num[z.x-1][z.y-1]=d;
  num[z.x-1][z.y]=a;
  num[z.x][z.y]=b;
  num[z.x][z.y-1]=c;

  result=xiaoqu2(num);
  if(result!=0) {
   return result;
  } else {
   result=0;
   num[z.x-1][z.y-1]=a;
   num[z.x-1][z.y]=b;
   num[z.x][z.y]=c;
   num[z.x][z.y-1]=d;
  }
 }else{
  result=0;
 }
 return result;
}

bool CGameLogic_2::wanfa2_jiaohuan2(int num[][8],Z z){
 int a,b,c,d;
 bool result=false;
 if(z.x<=7&&z.y<=7) {
  a=num[z.x-1][z.y-1];
  b=num[z.x-1][z.y];
  c=num[z.x][z.y];
  d=num[z.x][z.y-1];

  num[z.x-1][z.y-1]=d;
  num[z.x-1][z.y]=a;
  num[z.x][z.y]=b;
  num[z.x][z.y-1]=c;

  if(xiaoqu1(num)) {
   result=true;
  } else {
   result=false;
  }
  num[z.x-1][z.y-1]=a;
  num[z.x-1][z.y]=b;
  num[z.x][z.y]=c;
  num[z.x][z.y-1]=d;
 }else{
  result=false;
 }
 return result;
}

bool CGameLogic_2::wanfa2_all_cannot(int num[][8]){
 int i,j;
 bool result=true;
 for(i=1; i<8; i++) {
  for(j=1; j<8; j++) {
   Z z1;
   z1.x=i;
   z1.y=j;
   if(wanfa2_jiaohuan2(num,z1)) {
    result=false;
   }
  }
 }
 return result;
}
