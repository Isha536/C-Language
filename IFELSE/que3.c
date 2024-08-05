#include<stdio.h>

void main ()
{
	float maths, science, english,sum, result;
	
	printf("ENTER MATHS MARKS: ");
	scanf("%f",&maths);
	
	printf("ENTER SCIENCE MARKS: ");
	scanf("%f",&science);
	
	printf("ENTER ENGLISH MARKS: ");
	scanf("%f",&english);
	
	sum = maths + science + english;
	result = sum/3;
	printf("THE RESULT IS : %.2f\n",result);
	
	if (result>=90 && result<=100)
	{
		printf("THE GRADE IS A1.");
	}
	else if (result>=70 && result<=80)
    {
    	printf("THE GRADE IS A2.");
	}
	else if (result>=50 && result<=70)
	{
		printf("THE GRADE IS B1.");
	}
	else if (result>=33 && result<=50)
	{
		printf("THE GRADE IS B2.");
	}
	else 
	{
		printf("YOU ARE FAILED.");
	}	
}