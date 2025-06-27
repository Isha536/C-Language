#include <stdio.h>

void main()
{
	//wap to find whether user added consonant or vowel
    char choice;
    printf("Enter any alphabet: ");
    scanf(" %c", &choice); 

    switch(choice)
    {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("%c is Vowel,",choice);
            break;

        default:
            printf("%c is Consonant.",choice);
    }
}

