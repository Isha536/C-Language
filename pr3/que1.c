//Develop a Program to count the total number of digits in a number.
#include<stdio.h>

void main()
{
	int n,count=0;
	printf("Enter a number:");
	scanf("%d",&n);
	
	while(n>0)
	{
		n=n/10;
		count++;
	}
	printf("count=%d",count);
}