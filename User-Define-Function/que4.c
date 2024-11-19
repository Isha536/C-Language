#include<stdio.h>
#include<conio.h>
void main()
{
	//wap to check whether you are eligible for vote or not.
	age();
}
void age()
{
	int age;
	printf("Enter your age: ");
	scanf("%d",&age);
	
	if(age>18 && age<80)
	{
		printf("YOU ARE ELIGIBLE FOR VOTE.");
	}
	else if(age<=18 && age>0)
	{
		printf("YOU ARE NOT ELIGIBLE FOR VOTE.");
	}
	else
	{
		printf("ENTER VALID AGE.");
	}
}