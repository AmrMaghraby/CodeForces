#include<iostream>

using namespace std;

int main()
{
int iMoment,t=1,iX,Li,Ri,Total=0;
cin >> iMoment>>iX;
for(int i=0;i<iMoment;i++)
{
cin >> Li>>Ri;

for(;(t+iX)<=Li;t+=iX){};

Total += (Ri-t)+1;
t=Ri+1;

}
cout << Total;

}
