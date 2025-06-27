#include<stdio.h>
#include<conio.h>

void main()
{
	int n,max;
	
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
	
	max=a[0];
	for(i=1; i<n; i++)
	{
		if(max<a[i])
		{
			max=a[i];
		}
	}
	printf("Maximum element is %d",max);
}
