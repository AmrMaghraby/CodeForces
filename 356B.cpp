#include<stdio.h>

int Fibonacci(int);
main()
{
   int n, i = 0, c;
int cpy[20];
   scanf("%d",&n);

   for ( c = 1 ; c <= n ; c++ )
   {
      cpy[i]=Fibonacci(i);
      i++;
   }

int x[20];
for(int i=0;i<10;i++)
scanf("%d",&x[i]);

for(int i=r;i<10;i++)
  for(int j=i;j<;j++)
    {



    }

}

int Fibonacci(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;

      return ( Fibonacci(n-1) + Fibonacci(n-2) );
}
