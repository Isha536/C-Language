#include<stdio.h>
#include<conio.h>
void main ()
{
	//wap to find sum in 1d array
	int n,i,sum=0;
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
	
	for(i=0; i<n; i++)
	{
		sum=sum+a[i];	
	}	
	printf("\nSum of 1d Array is %d",sum);
}