#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int main ()
{
int x,y,Total1=0,Fmin=0,Total2=0;
    cin >> x >> y;
    int Puzz[y];

for(int i=0;i<y;i++)
    {
        cin >> Puzz[i];
    }

sort (Puzz,Puzz+y);

Total1 = Puzz[x-1] - Puzz[0];

for(int i=1;i<y;i++)
{
   if((i+x)>y) break;
  Total2 =  Puzz[i+x-1] - Puzz[i];

  Total1 = min (Total1,Total2) ;
 }
  if(Total1!=0)
    cout <<Total1;
  else if (Total1==0)
     cout << "0";
}
