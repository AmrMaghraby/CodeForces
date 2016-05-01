#include<iostream>
#include<algorithm>
using namespace std;

int main()
{

int n,x,min,j=0;

cin >> n;

int *cash = (int *)malloc(n*sizeof(int));
int *Total = (int *)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
cin >> cash[i];

for(int i=0;i<n;i++)
{
for (j=0;j<cash[i];j++)
{
cin >> x;
Total[i] +=x*5;
}
Total[i] +=(j)*15;
}
min = Total[0];

for(int i=1;i<n;i++)
{
if(min>Total[i])
min = Total[i];
}
cout << min ;
}
