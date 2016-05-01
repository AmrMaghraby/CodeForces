#include<conio.h>
#include<stdio.h>

int main(){
	int x,y[101],countn=0,countm=0,count=0,temp,ER;
	scanf("%d",&x);
	scanf("%d",&y[0]);
	int f=0,max[3]={y[0],0},min[3]={y[0],0},time;
	for(int i=1;i<x;i++)
	{
	scanf("%d",&y[i]);
	

	if(min[0]>=y[i])
	{
		if((min[0]==y[i] && i>min[1])||(min[0]!=y[i]))
		{
		min[1]=i;
	    min[0]=y[i];
        }
	  }
	}
   
    for(int i=0;min[1]!=x-1;i++)
  {
  	temp=min[0];
  	y[min[1]]=y[min[1]+1];
  	y[min[1]+1]=temp;
  	min[1]++;
    countn++;
  }

for(int i=0;i<x;i++)
	if (max[0]<=y[i])
	{
		if((max[0]==y[i] && i<max[1])||(max[0]!=y[i]))
		{
		max[1]=i;
	    max[0]=y[i];
	    
	}
    }
    
    for(int i=x;max[1]!=0;i--)
  {
  	temp=max[0];
  	y[max[1]]=y[max[1]-1];
  	y[max[1]-1]=temp;
  	max[1]--;
    countm++;
  }

time=countn+countm;
printf("%d",time);

getch();
}
