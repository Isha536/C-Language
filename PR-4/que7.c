#include<stdio.h>

void main ()
{
	int i,j,k,l;
	
	for(i=1; i<=5; i++)
	{
		for(j=1; j<=i; j++)
		{
			printf("%d ",j);	
		}
		for(k=i; k>=5; k--)
		{
			printf("%d ",k);
		}
		printf("\n");
	}
}
