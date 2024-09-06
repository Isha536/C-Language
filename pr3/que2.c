//Develop a program that prints all alphabets from ‘a’ to ‘z’ by skipping 3 alphabets using a do while.
#include<stdio.h>
void main()
{
	char i,n;
	i='A';

	do
	{
		printf("%c ",i);
		i+=4;	
	}while(i<='Z');
}
