//Develop a Program to find the sum of a number's first and last digits.
#include<stdio.h>
void main()
{
	int n,count,first;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	first=n;
	n=n/10;
	while(n>=10)
	{
		n=n*10;	
		count++;
	}
	printf("%d",count);
}