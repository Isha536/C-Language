#include<stdio.h>

void main()
{
	//program to write natural number in reverse order (n to 1)
	int i,start;
	
	//for user input;
	printf("Enter a Number: ");
	scanf("%d",&start);
	
	//n to 1 by while loop;
	i=start;
	while(i>=1)
	{
		printf("%d\n",i);
		i--;	
	}
	
}