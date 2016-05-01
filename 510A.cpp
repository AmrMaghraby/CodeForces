#include<conio.h>
#include<stdio.h>

int main(){
	int m,n,flag=0;
	scanf("%d%d",&m,&n);
	for(int i=1;i<=m;i++)
	if(i%2==0)
	{
	     if(flag==0) 		
	{  for(int z=1;z<n;z++)
		printf(".");flag=1;
	printf("#\n");
    }else{
    	printf("#");
	for(int z=1;z<n;z++)
	{
			flag=0;
	printf(".");
}printf("\n");
	}
	}else {
	for(int j=1;j<=n;j++)
	printf("#");
	printf("\n");
	}
getch();
}
