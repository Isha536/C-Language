#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to print multiplication table of number using FOR loop.
	table();
}
void table()
{
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=1; i<=10; i++)
	{
		printf("%d x %d= %d\n",n,i,n*i);
	}
}