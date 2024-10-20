#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	printf("ENTER THE VALUE OF a:");
	scanf("%d",&a);
	
	printf("ENTER THE VALUE OF b:");
	scanf("%d",&b);
	
	a=a*b;
	b=a/b;
	a=a/b;
	
	printf("the ans is:%d\n",a);
	printf("the ans is:%d",b);
}