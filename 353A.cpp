#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
int n,TP1=0,TP2=0;
cin >> n;

int *P1 = (int *)malloc(n*sizeof(int));
int *P2 = (int *)malloc(n*sizeof(int));

for(int i=0;i<n;i++)
{
cin >> P1[i] >> P2[i];
TP1+=P1[i];
TP2+=P2[i];
}

if(TP1%2==0 && TP2%2==0)
cout << "0";
else if (TP1%2 !=0 || TP2%2 != 0)
{
for(int i=0;i<n;i++)
 if((P1[i]%2 != 0 && P2[i]%2 == 0)||(P2[i]%2 != 0 && P1[i]%2 == 0))
  {
  TP1 -=P1[i];
  TP2 -=P2[i];
  swap(P1[i],P2[i]);
  TP1 += P1[i];
  TP2 += P2[i];
  break;
  }
 if(TP1%2 != 0 || TP2%2 != 0)
cout << "-1";
else if(TP1%2==0 && TP2%2==0)
cout << "1";
}
}
