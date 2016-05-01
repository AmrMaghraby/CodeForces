#include<iostream>
#include<math.h>
using namespace std;

int check(int x)
{
int y,cnt=0,i=0;
while(x!=0)
{
i++;
y=x%10;
x/=10;
if(y==8)
cnt=i;
}
return cnt;
}
int main()
{
int icheck,ii=1,flag=0;
int x,i,y,eight=8,minn=88888888;
cin >> x;
icheck = check(x);

for(y=10;x%y!=x;y*=10,ii++)
{
if (icheck>1)
if(ii==icheck)
{
cout<<"1";
return 0;
}
i = eight-x%y;
if(i<0)i*=-1;
eight*=10;
if(i<minn )
minn=i;
}
if(ii==icheck)
{
cout<<"1";
return 0;
}else
i = eight-x%y;
eight*=10;
if(i<0)i*=-1;
if(i<minn  )
minn=i;

if(icheck==1)minn+=10;
cout << minn;


}
