#include<stdio.h>

void main()
{
	//program to find the min/lowest among three.
	int a,b,c;
	
	//for user input;
	printf("Enter a: ");
	scanf("%d",&a);
	printf("Enter b: ");
	scanf("%d",&b);
	printf("Enter c: ");
	scanf("%d",&c);
	
	//using nested if else
	//a,b,c
	//a,b
	if(a<b)
	{
		//a,c
		if(a<c)
		{
			//a is min/lowest.
			printf("a is Lowest.");
		}
		else
		{
			//c is min/lowest.
			printf("c is Lowest");
		}	
	}
	//b,c
	else
	{
		if(b<c)
		{
			//b is min/lowest.
			printf("b is Lowest.");
		}
		else
		{
			//c is lowest.
			printf("c is Lowest.");
		}
	}
}