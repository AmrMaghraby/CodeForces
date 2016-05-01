#include<iostream>
#include<algorithm>
using namespace std;

int main ()
{
int n,flag1=0,flag2=0;
cin >> n;
int *Arr = (int *)malloc(n*sizeof(int));
int *check = (int *)calloc(n,sizeof(int));
for(int i=0;i<n;i++)
{
cin >> Arr[i];
}
sort(Arr,Arr+n);
for(int i=0;i<n;i++)
{
if(Arr[i]<0 && flag1==0)
   {
   cout << "1 "<<Arr[i]<<endl;
   flag1=1;check[i]=1;
   }
else if(Arr[i]*Arr[i+1]>0)
   {
   cout << "2 "<<Arr[i]<<" "<<Arr[i+1]<<endl;
   flag2=2;check[i]=1;check[i+1]=1;
   }
else if (Arr[i]>0)
   {
   cout << "1 "<<Arr[i]<<endl;
   flag2=1;check[i]=1;
   }
if (flag1==1&&(flag2==1||flag2==2))
break;
}
cout << n-(flag1+flag2);
for(int i=0;i<n;i++)
if(check[i]==0)
cout << " "<<Arr[i];
}
