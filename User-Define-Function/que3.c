#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to find the cube of num given by the user.
	cube();
}
void cube()
{
	int n,cube;

	printf("Enter a number: ");
	scanf("%d",&n);
	cube= n*n*n;
	printf("Cube= %d",cube);
}