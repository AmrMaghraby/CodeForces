#include<conio.h>
#include<stdio.h>

int main()
{   
    
    int n,x[201],y[201],z[201];
    int countx=0,county=0,countz=0;
	scanf("%d",&n);
    
    for (int i=0;i<n;i++)
	{
		scanf("%d%d%d",&x[i],&y[i],&z[i]);
	    countx += x[i];county += y[i];countz += z[i];
	
	}
	
	if(countx==0 && county==0 && countz==0)
	  printf("YES");
	else printf("NO");
	
	getch();
}
