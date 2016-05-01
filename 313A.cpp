#include<conio.h>
#include<stdio.h>
#include<math.h>

int main(){
	int x,num1=0,num2=0;
	scanf("%d",&x);
	if(x>=10)
	printf("%d\n",x);
	else {
		x=fabs(x);
		num1=x/10;
		
		num2=((x-(x%100))+(10*(x%10)))/10;
   		num1*=-1;
        num2*=-1;
   
	if(num1>num2)
	printf("%d\n",num1);
	else printf("%d\n",num2);	
	}
	
	

getch();
}

