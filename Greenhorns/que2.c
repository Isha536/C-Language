#include<stdio.h>

void main()
{
	// Write C Program to perform a swapping of two variables without using third variable.
	
	int a,b;
	
	printf("ENTER THE VALUE OF a:");
	scanf("%d",&a);
	
	printf("ENTER THE VALUE OF b:");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("the ans is:%d\n",a);
	printf("the ans is:%d",b);
	
}
