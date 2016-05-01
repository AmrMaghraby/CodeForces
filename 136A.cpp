#include<conio.h>
#include<stdio.h>

int main(){
	int x,y[101],n=1,count,arrnged[101];
	scanf("%d",&x);
	
	
	for(int i=1;i<=x;i++)
	{
		scanf("%d",&y[i]);
	}
	
	for(int i=1;i<=x;i++)
	{
		
			count=y[i];
			arrnged[count]=i;
			
	}
	
	for(int i=1;i<=x;i++)
	{
		
		printf("%d",arrnged[i]);
		if(i<x)printf(" ");
	}
   	
    printf("\n");
	getch();
}
