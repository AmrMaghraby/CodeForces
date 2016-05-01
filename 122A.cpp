#include<conio.h>
#include<stdio.h>

int main(){

    int x,flag=0,y[]={4,7,44,47,74,777,444,744,477,474,747,77};
	scanf("%d",&x);
	for(int i=0;y[i]!=NULL;i++)
	{
		if(x%y[i]==0)
		flag=1;
		
	}
	
	if (flag==1)
	printf("YES\n");
	else printf("NO\n");
	getch(); 
}
