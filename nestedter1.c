#include<stdio.h>
#include<conio.h>

void main ()
{
	int a,b,c;
	
	printf("ENTER THE VALUE OF a:");
	scanf("%d",&a);
	printf("ENTER THE VALUE OF b:");
	scanf("%d",&b);
	printf("ENTER THE VALUE OF c:");
	scanf("%d",&c);
	
	(a>b)?
	    (a>c)?
	      printf("a IS MAXIMUM")
	     :printf("c IS MAXIMUM")
	    :
	    (b>c)?
	     printf("b IS MAXIMUM")
	    :printf("c IS MAXIMUM");
	    	
}