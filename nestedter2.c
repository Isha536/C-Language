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
	      printf("a IS MINIMUM")
	     :printf("c IS MINIMUM")
	    :
	    (b>c)?
	     printf("b IS MINIMUM")
	    :printf("c IS MINIMUM");
	    	
}