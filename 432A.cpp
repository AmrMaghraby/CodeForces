#include<conio.h>
#include<stdio.h>

int main(){
	
	int n,k,count=0;
	scanf("%d%d",&n,&k);
	int st[n];
	for(int i=0;i<n;i++)
	   scanf("%d",&st[i]);
	for(int i=0;i<n;i++)
	  if((st[i]+k)<=5) 
	   count++;
	
	count/=3;
	printf("%d",count);
	getch();
}
