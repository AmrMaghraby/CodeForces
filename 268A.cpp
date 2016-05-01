#include<conio.h>
#include<stdio.h>

int main(){
	int x,host[101],error=0;
	scanf("%d",&x);
	
	int y[x][2],count=0;
	
	for(int i=0;i<x;i++)
	  for(int j=0;j<2;j++)
	     scanf("%d",&y[i][j]);
	        
	for(int i=0;i<x;i++)
	  host[i]=y[i][0];
	  
	for(int i=0;i<x;i++)
	 {
	  if(host[i]==y[i][1])error++;
	  for(int j=0;j<x;j++)
	   if(host[i]==y[j][1])
	     count++;    
      }
	printf("%d",count-error);
	getch();
}
