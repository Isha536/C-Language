#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to print multiplication table of number using FOR loop.
	table(5);
}
void table(int n)
{
	int i;
	
	for(i=1; i<=10; i++)
	{
		printf("%d x %d= %d\n",n,i,n*i);
	}
}