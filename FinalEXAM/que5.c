#include<stdio.h>
#include<conio.h>
int even(int n)
{
	//wap to check whether the number is even or not using udf
	if(n%2==0)
	{
		printf("It is an Even number.");
	}
	else
	{
		printf("It is not an Even number.");
	}
	return 0;
	
}
void main()
{
	even(3);
}
