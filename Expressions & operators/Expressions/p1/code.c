#include "stdio.h"

void main(void)
{
	int ascii;
	char c;
	printf("please enter a character : ");
	scanf("%c", &c);
	printf("the character you entered : %c",c);
	ascii = (int)c;
	printf("\nthe Ascii of the character is : %d",ascii);
}