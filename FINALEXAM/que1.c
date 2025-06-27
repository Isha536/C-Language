#include<stdio.h>
void main()
{
	//wap to find largest/max from 1d array.
	int n,i;
	printf("Enter the size of array: ");
	scanf("%d",&n)
	int a[n];
	for(i=0; i<n; i++)
	{
		printf("a[%d]: ",i);
		scanf("%d",&n);
	}
	for(i=0; i<n; i++)
	{
		printf("a[%d]",i);
	}
	int max=a[0];
	for(i=0; i<n; i++)
	{
		if(max<=a[i])
		{
			printf("");
		}
	}
}
