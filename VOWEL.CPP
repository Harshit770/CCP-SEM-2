#include <stdio.h>
#include <conio.h>
int main()
{
    char ch;
    clrscr();
    printf("Enter any alphabet: ");
    scanf("%c", &ch);
    switch(ch)
    {
	case 'a':


	case 'e':


	case 'i':


	case 'o':


	case 'u':


	case 'A':


	case 'E':


	case 'I':


	case 'O':


	case 'U':
	    printf("Vowel");
	    break;
	default:
	    printf("Consonant");
    }
    getch();
    return 0;
}