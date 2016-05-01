#include<conio.h>
#include<stdio.h>
#include<string.h>

int main(){
	char y[100],temp,x;
	scanf("%s",&y);
	int m;
	m=strlen(y);
	
	for(int i=0;i<m;i++)
	{
		if(y[i]=='+')i++;
		for(int j=0;j<m;j++)
		{
			if(y[j]=='+')j++;
			
		if	(y[i]<y[j])
			{
			temp=y[j];
			y[j]=y[i];
		    y[i]=temp;
		}
}
}
	for(int i=0;i<m;i++)
	printf("%c",y[i]);
	printf("\n");
       	getch();
	
}
