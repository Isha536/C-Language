//wap to print 1 to n, without using loop.
#include<stdio.h>
void recursion(int n)
{
	printf("%d\n",n);
	if(n>1)
	{
		recursion(n-1);
	}
}
void main()
{
	int n;
	printf("Enter n No. : ");
	scanf("%d" , &n);
	recursion(n);
}
