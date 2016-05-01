#include <iostream>
#include <stdlib.h>

using namespace std;

int main ()
{
//--------------------------------------------------------------------------------------
int iSqNu,flag=0;
//--------------------------------------------------------------------------------------
cin >> iSqNu;
//--------------------------------------------------------------------------------------
char *pSqNu = (char *)malloc(iSqNu*iSqNu*(sizeof(char)));
//--------------------------------------------------------------------------------------
for(int i=0;i<iSqNu*iSqNu;i++)
{
cin >> pSqNu[i];
}
//--------------------------------------------------------------------------------------
char check = pSqNu[0];

 for(int i=0;i<iSqNu*iSqNu && flag==0;i+=iSqNu+1)
{
if (pSqNu[i]!=check)
       flag=1;

}
//--------------------------------------------------------------------------------------
int increment=iSqNu-1;
for(int i=0;i<iSqNu*iSqNu && flag==0 ;i+=increment)
{
if (pSqNu[i]!=check)
       flag=1;
}
//---------------------------------------012 345 678
//---------------------------------------xox oxo xox-----------------------------------------------
for(int i=2;i<iSqNu*iSqNu && flag==0;i++)
{
if (pSqNu[0]!=pSqNu[i] && pSqNu[1]!=pSqNu[i])
       flag=1;
}
//--------------------------------------------------------------------------------------
int count =1;
for(int i=1;i<iSqNu*iSqNu && flag==0;i++)
{
if(pSqNu[0]==pSqNu[i])
count++;

if(count >=iSqNu*2)
   {
flag=1;
break;
  }
}
if (flag==0)cout << "YES";
else cout << "NO";

}
