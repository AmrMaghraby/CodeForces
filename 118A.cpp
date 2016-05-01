#include<conio.h>
#include<stdio.h>

int main(){
	
	char s[100],temp;char dot= '.';
	scanf("%s",&s);
    
    
    
    
	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>=65&&s[i]<=90)
		s[i]=s[i]+32;
		
	if(s[i]!='a'&&s[i]!='e'&&s[i]!='y'&&s[i]!='u'&&s[i]!='i'&&s[i]!='o' )
	{
     printf(".%c",s[i]);
	}
    }
	printf("\n");
	getch();
}

