#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,c;
	
	printf("ENTER THE VALUE OF a: ");
	scanf("%d",&a);
	
	printf("ENTER THE VALUE OF b: ");
	scanf("%d",&b);
	
	c = a;
	a = b;
	b = c;
	
	printf("the ans is= %d\n",a);
	printf("the ans is= %d ",b);
	
}