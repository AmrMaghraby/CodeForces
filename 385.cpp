#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
	int x,y,z;
	cin >> x>>y;
	int *p =(int *)malloc(x*sizeof(int));
    int	max =0,max2=0;
	for(int i=0;i<x;i++)
	{
	cin >> p[i];
	}

    for(int i=0;i<x-1;i++)
    {
    max2=p[i]-p[i+1]-y;
    if (max2 > max)
    max =max2;

    }

cout << max;
}
