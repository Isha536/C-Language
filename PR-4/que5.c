#include<stdio.h>

void main()
{
	int i,j,k;
	
	for (i=1; i<=5; i++)
	{
		for(j=1; j<=5; j++)
		{
			if (i==1 || j==1 || i==3)
			{
				printf("* ");
			}
			else if((i==2 && j==5))
			{
				printf("   * ");	
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
