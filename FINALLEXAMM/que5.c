#include<stdio.h>
void main()
{
	//pattern
	//1,4,9,16,25
	//1+3+5+7+9 
int i, j;

    for(i = 1; i <= 5; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", i * i);
        }
        printf("\n");
    }
}
