#include<iostream>

using namespace std;

char cExam[101][101];

int main()
{

int iNoStd,iNoEX,flag=0,cnt=0,y=0;
cin >> iNoStd >>iNoEX;

  for(int i=0;i<iNoStd;i++)
     for(int j=0;j<iNoEX;j++)
      {
      cin >> cExam[i][j] ;
      }

 for(int k=0 ; k<iNoStd ; k++)
 {
  flag=0;
  for(int i=0 ; i<iNoEX && flag==0 ; i++)
   {cnt=0;
   for(int j=0 ; j<iNoStd ; j++)
    {

    if (cExam[k][i] >= cExam[j][i] )
    {
    cnt++;

    if(cnt==iNoStd)
    {flag=1;
    y++;
    break;
    }
    }
    }

}
}
cout << y;

}
