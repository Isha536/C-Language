#include<stdio.h>

void main()
{
	// Write C Program to find gross salary.(GROSS SALARY=BASE SALARY+HRA+DA+TA)
	
	//Gross Salary Calculator
	int HRA,TA,DA;
	float SALARY,total ;
	
	printf("ENTER THE SALARY:");
	scanf("%f",&SALARY);
	
	printf("ENTER HRA:");
	scanf("%d",&HRA);
	
	printf("ENTER DA:");
	scanf("%d",&DA);
	
	printf("ENTER TA:");
	scanf("%d",&TA);
	
	HRA= (SALARY*HRA)/100;
	DA=(SALARY*DA)/100;
	TA=(SALARY*TA)/100;
	total= SALARY+HRA+DA+TA;
	
	
	printf("THE GROSS SALARY IS: %.2f",total);
}
