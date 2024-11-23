#include<stdio.h>
//simple calculator
int add(int num1,int num2)
{
	int add;
	add=num1+num2;
	return add;		
}
int sub(int num1,int num2)
{
	int sub;
	sub=num1-num2;
	return sub;		
}
int multiply(int num1,int num2)
{
	int multiply;
	multiply=num1*num2;
	return multiply;		
}
int div(int num1,int num2)
{
	int div;
	div=num1/num2;
	return div;		
}
int module(int num1,int num2)
{
	int module;
	module=num1%num2;
	return module;		
}
int main()
{
	int num1,num2,choice;
	
	
	printf("Enter number-1: ");
	scanf("%d",&num1);
	
	printf("Enter number-2: ");
	scanf("%d",&num2);
	
	if(choice<=5)
	{
		printf("\nEnter your choice: ");
		scanf("%d",&choice);
	}
	else
	{
		printf("Enter the number between 1 to 5.");
	}
	
	if(choice==1)
	{
		printf("The addition is %d",add(num1,num2));
	}
	else if(choice==2)
	{
		printf("The substraction is %d",sub(num1,num2));
	}
	else if(choice==3)
	{
		printf("The multiplication of two number is %d",multiply(num1,num2));
	}
	else if(choice==4)
	{
		printf("The division of two number is %d",div(num1,num2));
	}
	else 
	{
		printf("The module of two number is %d",module(num1,num2));
	}
	
	return 0;
}