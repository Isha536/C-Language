#include<stdio.h>

void main ()
{
	int start,end;
	
	printf("Enter first year: ");
	scanf("%d",&start);
	printf("Enter second year: ");
	scanf("%d",&end);

	while(start<=end)
	{
		if(start%4==0)
		{
			printf("%d\n",start);
		}
		start++;
	}
	
	
}