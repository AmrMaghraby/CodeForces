#include<iostream>

using namespace std;
int x1[100],x2[100],x3[100];
int main()
{
long long x,y,c1;
cin >> x >> y;
c1=x+y;

int ii=0;
while(x!=0)
{
if(x%10 != 0)
{
x1[ii]=x%10;
ii++;
}
x/=10;
}
int i=0;
while(y!=0)
{
if(y%10 != 0)
{
x2[i]=y%10;
i++;
}
y/=10;
}
int iii=0;
while(c1!=0)
{
if(c1%10 != 0)
{
x3[iii] = c1%10;
iii++;
}
c1 /= 10;
}

for (int m = ii-1; m >= 0; m--)
    {
    x = 10 * x + x1[m];

    }
for (int m = i-1; m >= 0; m--)
    y= 10 * y + x2[m];


for (int m = iii-1; m >= 0; m--)
    c1 = 10 * c1 + x3[m];



if(x+y==c1)
cout << "YES";
else
cout <<"NO";
}

