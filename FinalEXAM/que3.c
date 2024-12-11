#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to print odd number 1 to n (while loop)
	int i,n;
	printf("Enter n: ");
	scanf("%d",&n);
	
	//to print n
	i=1;
	while(i<=n)
	{
		i++;
		if(i%2==0)
		{
			printf(" ");
		}
		else
		{
			printf("%d ",i);
		}
	}
}
