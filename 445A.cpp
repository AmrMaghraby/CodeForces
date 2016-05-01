#include<iostream>

using namespace std;

int main()
{

int x,y,cnnt=0;
char a[101];
cin >> x>>y;
for(int i=0;i<x*y;i++)
    {
    cin >> a[i];

    if(a[i]=='.')
       {
        if (i%2==0)
        a[i]='B';
        else if (i%2!=0)
        a[i]='W';
    }}

int cnt=1;
for(int i=0;i<x*y;i++)
{
cout << a[i];
if (cnt==x)
{
cout<< endl;
cnt=0;
  }
    cnt++;
    }}
