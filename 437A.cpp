#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

int main(){

char A[103],B[103],C[103],D[103];
int iA,iB,iC,iD,flag[4]={0},cnt=0;
gets(A);
gets(B);
gets(C);
gets(D);
iA=strlen(A);
iB=strlen(B);
iC=strlen(C);
iD=strlen(D);

if ((iA<=2*iB)&&(iA<=2*iC)&&(iA<=2*iD))
flag[0]=1;
if ((iA>=2*iB)&&(iA>=2*iC)&&(iA>=2*iD))
flag[0]=1;
if ((iB<=2*iA)&&(iB<=2*iC)&&(iB<=2*iD))
flag[1]=1;
if ((iB>=2*iA)&&(iB>=2*iC)&&(iB>=2*iD))
flag[1]=1;
if ((iC<=2*iA)&&(iC<=2*iB)&&(iC<=2*iD))
flag[2]=1;
if ((iC>=2*iA)&&(iC>=2*iB)&&(iC>=2*iD))
flag[2]=1;
if ((iD<=2*iA)&&(iD<=2*iB)&&(iD<=2*iC))
flag[3]=1;
if ((iD>=2*iA)&&(iD>=2*iB)&&(iD>=2*iD))
flag[3]=1;

for(int i=0;i<4;i++)
if(flag[i]==1)
cnt++;
cout <<cnt;
if(cnt==0||cnt>1)
cout <<  "C";
else if(cnt==1)
for(int i=0;i<4;i++)
if(flag[i]==1)
{
if (i==0)
cout<<"A";
if (i==1)
cout<<"B";
if (i==2)
cout<<"C";
if (i==3)
cout<<"D";
}
}
