#include<conio.h>
#include<stdio.h>
#include<math.h>
int main()
{
	int counts=0,countz=0;
	char s[100];
	char z[100];
	
	scanf("%s%s",&s,&z);
	
	for(int i=0;s[i]!='\0';i++)
	{
		if (s[i]>=65&& s[i]<=90 )
		s[i]=s[i]+32;
		if (z[i]>=65&& z[i]<=90 )
		z[i]=z[i]+32;
	    if(s[i]>z[i])
		{
		counts++;
	    break;
		}
		else if(s[i]<z[i])
		{
		countz++;
	    break;
	}}
	
	
	if (counts>countz)
	printf("1\n");
	else if (countz>counts) printf("-1\n");
	else if (counts==countz) printf("0\n");
	getch();
	
}
