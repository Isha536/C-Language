#include<stdio.h>

void main()
{
	int number1,number2;
	
	printf("ENTER FIRST NUMBER: ");
	scanf("%d",&number1);
	
	printf("ENTER SECOND NUMBER:");
	scanf("%d",&number2);
	
	if (number1<number2)
	{
		printf("FIRST NUMBER IS MINIMUM.");
	}
	else if (number1==number2)
	{
		printf("BOTH NUMBER ARE SAME.");
	}
	else 
	{
		printf("SECOND NUMBER IS MINIMUM.");
	}
}