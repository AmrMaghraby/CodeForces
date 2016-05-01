#include<conio.h>
#include<stdio.h>

int z[100000],zz[100000];

int main(){
	int x=0,y=0,temp1=0,temp2=0,count=0;
	scanf("%d%d",&x,&y);
	
	for(int i=0;i<y;i++)
	{
		scanf("%d",&z[i]);
		scanf("%d",&zz[i]);
	}
	
	for(int i=0;i<y;i++)
    {
    	for(int j=i+1;j<y;j++)
    	  
		   if(z[i]>z[j])
    	{
		temp1=z[i];
		z[i]=z[j];
		z[j]=temp1;
		
		temp2=zz[i];
		zz[i]=zz[j];  
    	zz[j]=temp2;
    	
		}	 
     }
	
	
	
	for(int i=0;i<y;i++)
	   
    {  
	if(x>z[i])
	{
	x+=zz[i];
	count++;}
	
	if (x<=z[i])
	{
	printf("NO\n");
	break;
	}
	
    }
	
	if(count==y)
	printf("YES\n");
	getch();
	
}
