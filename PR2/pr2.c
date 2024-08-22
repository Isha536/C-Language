#include<stdio.h>

void main ()
{
	//Simple Grade Calculator
	
	char grade;
	int marks;
	
	printf("Enter your SCORE:");
	scanf("%d",&marks);
	
	//Grade calc by ternery operator
	
	grade=(marks>=90 && marks>=100)?'A'
	:(marks>=70 && marks<90)?'B'
	:(marks>=60 && marks<70)?'C'
	:(marks>=50 && marks<60)?'D'
	:(marks>33 && marks<50)?'E'
	:'F';
	
	printf("YOUR GRADE IS %c.",grade);
	
	//additional comments by switch case
	
	switch (grade)
	{
	case 'A': printf("EXCELLENT WORK.");
	break;
	case 'B': printf("Well Done.");
	break;
	case 'C': printf("Good Job.");
	break;
	case 'D': printf("You just Passed.But you could do better.");
	break;
	case 'F': printf(" Sorry,you FAILED.");
	break;
	}
	//eligibility grade using if else
	
	if (grade=='A' || grade=='B' || grade=='C' || grade=='D' || grade=='E')
	{
		printf(" Congratulations.");	
	}
	else 
	{
		printf(" PLEASE TRY AGAIN NEXT TIME.");
	}
}