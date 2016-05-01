#include<iostream>

using namespace std;

int main()
{
long long cnt=0,i=0,M1=0,M2=0;
string str;

cin >> str ;

for(cnt=1;(str[cnt]-'0')!=46;cnt++);


for(i=0;(str[i]-'0')!=46;i++)
{
if(str[i]-'0' != 13)
M1+=(str[i]-'0')*cnt;

cnt--;
}
cnt=1;

for(i+=1;str[i]!=NULL;i++)
{
if(str[i]-'0' != 13)
M2+=(str[i]-'0')*cnt;

cnt++;
}

if(M1==M2)
cout << "balance";
else if (M1>M2)
cout << "left";
else if (M2>M1)
cout << "right";
}
