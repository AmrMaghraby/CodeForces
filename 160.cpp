#include<conio.h>
#include<stdio.h>

int main(){
	int x,y[100],temp,t2=0,temp2;
	
	scanf("%d",&x);
	
	for(int i=0;i<x;i++)
	{
		scanf("%d",&y[i]);
		t2=t2+y[i];
		
	}
	
	for(int i=0;i<x;i++)
	{
		for(int j=i+1;j<x;j++)
		{
			if(y[i]>y[j])
			{
			 temp=y[j];
			 y[j]=y[i];
			 y[i]=temp;	
			
			}
			
		}
		
	}
	
	int  total,counter=0,i=x-2;
	
	if( t2-y[x-1] >= y[x-1])
	{temp2=t2;
	for(total=y[x-1];total<=t2;i--)
	{t2=temp2;
	total = total+y[i];counter++;
	 	t2=t2-total;}
	
	if(x==1)
	counter=0;
	
printf("%d",counter+1);
	}
	else printf("1");
	
	
	getch();
}
