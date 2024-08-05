#include<stdio.h>

void main()
{
	int num;
	
	printf("ENTER NUMBER:");
	scanf("%d",&num);
	
	if (num>0)
	{
		printf("NUMBER IS POSITIVE.");
	}
	else if (num==0)
	{
		printf("NUMBER IS NEUTRAL.");
	}
	else 
	{
		printf("NUMBER IS NEGATIVE.");
	}
		
}