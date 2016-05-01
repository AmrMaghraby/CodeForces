#include<iostream>

using namespace std;

int main()
{

int iSize[4]={0},temp=0,iTotal=0;

cin >> iSize[0] >> iSize[1] >> iSize[2] >> iSize[3];

for(int i=1;i<=3;i++)
      {
for (int j=1;j<=3;j++)
    {
if (iSize[i]<iSize[j])
 {
 temp=iSize[i];
 iSize[i]=iSize[j];
 iSize[j]=temp;
 }
   }
      }
       int i=1,cnt=0;
      while(iTotal<iSize[0])
      {
      cout << iTotal;
      if((iTotal+iSize[i])<=iSize[0])
      iTotal+=iSize[i];
      else {
      i++;
      iTotal += iSize[i];
      }
      cnt++;
      }
cout << cnt;

}
