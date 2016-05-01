#include<conio.h>
#include<stdio.h>



int main(){
	int i=0,x;
	char s[100];
	
	scanf("%d",&x);
 for(int j=0;j<x;j++){
	scanf("%s",&s);
	i=0;
	char *p=s;
	
	 while(*p++)
	 i++;
    	
	if(i>10)
	printf("%c%d%c\n",s[0],i-2,s[i-1]);
	else printf("%s\n",s);
}
	getch();
}
