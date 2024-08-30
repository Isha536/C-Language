#include<stdio.h>

void main ()
{
	int n,m,i;
	//wap n to m using while loop
	printf("Enter a number: ");
	scanf("%d",&n);
	printf("Enter a number: ");
	scanf("%d",&m);

	while(m>=n)
	{
		printf("%d\n",m);
		m--;
	}
	
	
}