#include<conio.h>
#include<stdio.h>

int main(){
	char x[101];
	char *p=x;
	int count=0,error=0,j=0;
	gets(x);
	while(*p++)
	{
	count++;
	}
	
	for(int i=0;x[i]!=NULL;i++)
     for(int j=0;j<i;j++)
	  if(x[j]==x[i])
	    count--;
	
	if(count==0)count=1;
	if(count%2==0)
	 printf("CHAT WITH HER!\n");
	else printf("IGNORE HIM!\n");
	
	getch();
}
