#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to print 1d array.
	int n;
	
	printf("Enter the size of Array: ");
	scanf("%d",&n);
	
	int a[n];
	int i;

	for(i=0; i<n; i++)
	{
		printf("Enter a[%d]: ",i);
		scanf("%d",&a[i]);
	}
	
	for(i=0; i<n; i++)
	{
		printf("%d ",a[i]);
	}	
}