#include<stdio.h>
#include<conio.h>
void main ()
{
	//wap to find max in 1d array
	int n,i;
	printf("Enter the size of an Array: ");
	scanf("%d",&n);
	
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}
	
	int max=0;
	for(i=0; i<n; i++)
	{
		if(max>n)
		{
			printf("%d is maximum.",max);
		}
	}
}