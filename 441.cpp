#include <iostream>
#include<stdlib.h>
#include <stdio.h>
using namespace std;
bool check[1000];
int main()
{
int x,v,y,i,count=0;
int flag=0;
cin >> x>>v;
int *p=(int*)malloc(x*sizeof(int));

for(i=1;i<=x;i++)
 {
cin >> p[i];

for(int j=1;j<=p[i];j++)
   {
cin >> y;
if(y<v && flag==0)
  {
check[i]=true;
count++;
flag=1;
   }
 }
flag=0;
}

cout <<count<<endl;

for(int z=1;z<=i-1;z++)
{
if(check[z]==true)
if(z==i-1)
cout << z;
else
cout << z<<" ";
}

}
