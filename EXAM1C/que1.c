#include<stdio.h>

void main()
{
	//program to evaluate (a*a + 2*a*b + b*b)
	int a,b,sum;
	
	//for user input;
	printf("Enter the value of a: ");
	scanf("%d",&a);
	printf("Enter the value of b: ");
	scanf("%d",&b);
	
	//for evaluation
	sum= a*a + 2*(a*b) + b*b;
	
	//after evaluation
	printf("After evaluation the ans is %d",sum);
}