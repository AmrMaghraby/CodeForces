#include<iostream>

using namespace std;
int a[5];
int digits(int x)
{
 int i;
for(i=0;x!=0;i++)
{
a[i]=x%10;
x/=10;
 }
 return i;
   }

bool check(int y)
{
for(int i=0;i<y;i++)
 for(int j=0;j<y;j++)
   {
   if(i==j)j++;
    if(a[i]==a[j])
   return false ;
   }
return true ;
}

int main()
{
int x;
cin >> x;
while(true)
{
  x+=1;
  int y = digits(x);
if(check(y)==true)
{
cout << x;
return 0;
}
   }
     }
