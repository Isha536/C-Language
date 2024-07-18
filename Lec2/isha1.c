#include<stdio.h>
#include<conio.h>

void main()
{
	float radius, area;
	const float pie= 3.14;
	printf("Enter the area of circle:");
	scanf("%f" ,&radius);
	area = pie*radius*radius;
	printf("The area of circle is %.2f",area);
}