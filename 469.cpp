#include<stdio.h>

int main(){
	int x,littlex[101],littley[101],count=0;
	scanf("%d%d%d",&x,&littlex[0],&littley[0]);
	
	for(int i=1;i<=littlex[0];i++)
	scanf("%d",&littlex[i]);
	
	for(int i=1;i<=littley[0];i++)
	scanf("%d",&littley[i]);
	
	for(int j=1;j<=x;j++)
	 for(int i=0;i<=x;i++)
	  if(j==littlex[i] || j==littley[i])
	     {
		 count++;
	     break;
		 }
	     
	if(count == x)     
	printf("I become the guy.\n");
	else printf("Oh, my keyboard!\n");
	

}
