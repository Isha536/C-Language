#include<stdio.h>

void main()
{
	int a,b,c;
	
	printf("ENTER a:");
	scanf("%d",&a);
	
	printf("ENTER b:");
	scanf("%d",&b);
	
	printf("ENTER c:");
	scanf("%d",&c);
	
	//nested if else
	//a,b,c
	if(a>b)
	{
		//a,c
		if (a>c)
		{
			//a
			printf("a IS MAXIMUM.");
		}
		else 
		{
			//c
			printf("c IS MAXIMUM.");
		}
		
	}
	else
	{
		//b,c
		if (b>c)
		{
			//b
			printf("b IS MAXIMUM.");	
		}
		else
		{
			//c
			printf("c IS MAXIMUM.");
		}	
	}
}