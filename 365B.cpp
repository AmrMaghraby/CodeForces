///IN THE NAME OF ALLAH
 #include<bits/stdc++.h>
 using namespace std;
 int main(){

 int n;
 scanf("%d",&n);
 int Arr[n];
 for(int i=0;i<n;i++)
  scanf("%d",&Arr[i]);
 int res=0,mx=-1e9;
 if(n<=2)
   {
       printf("%d",n);
       return 0;
   }
 else if(Arr[0]==1&&Arr[1]==1)
    res=2;

 for(int i=2;i<n;i++)
   if(Arr[i]==Arr[i-1]+Arr[i-2])
    {
     res++;
     mx=max(res+2,mx);
    }
   else {
    mx=max(res,mx);
    res=0;
   }

  printf("%d",mx);

 }
