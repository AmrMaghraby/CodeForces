#include<iostream>
#include<math.h>
using namespace std;

int main(){

int ip1,ip2,iFirstP=0,iSecondP=0,iDraw=0;

cin >> ip1 >> ip2;

for(int i=1;i<=6;i++)
{
  if(fabs(ip1-i)<fabs(ip2-i))
   iFirstP++;
  else if (fabs(ip1-i)>fabs(ip2-i))
  iSecondP++;
  else
  iDraw++;
}
cout << iFirstP <<" "<< iDraw << " "<<iSecondP;

}
