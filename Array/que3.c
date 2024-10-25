#include<stdio.h>
#include<conio.h>

void main()
{
	//wap to print the sum of all the elements.
	int n,sum=0;
	
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
		
		printf("%d\n",a[i]);
	}
	printf("\n");
	
	for(i=0; i<n; i++)
	{
			sum=sum+a[i];
	}
	printf("the sum is %d",sum);
}