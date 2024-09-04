#include<stdio.h>
void main()
{
	//a program to print even number from 1 to n.
	
	int i,n;
	
	
	printf("Enter a number:");
	scanf("%d",&n);
	
	do
	{
		if(n%2==0)
		{
			printf("%d ",n);
		}
		n--;	
	}while(n>=1);

} 