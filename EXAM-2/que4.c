#include<stdio.h>
#include<conio.h>
//wap to find the area of triangle
int triangle()
{
	int l,h,area;
	printf("Enter the length of triangle: ");
	scanf("%d",&l);
	
	printf("Enter Height of triangle: ");
	scanf("%d",&h);	
	
	area=(l*h)/2;
	printf("Area of triangle is %d",area);
	
	return 0;
}
void main ()
{	
	triangle();	
}