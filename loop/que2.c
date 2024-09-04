#include<stdio.h>

void main ()
{
	//Write a program to find factorial of 1 to n
	int n,f=1;
	
	printf("Enter a number: ");
	scanf("%d",&n);
	
	do
	{
		f=f*n;
		n--;
	} while(n>=1);
	
	printf("Factorial is %d.",f);
}