#include "stdio.h"

void main(void)
{
	char ch;
	printf("please enter a character : ");
	scanf("%c",&ch);
	(ch<=90&&ch>=65)||(ch>=97&&ch<=122) ? printf("Alphabet"):printf("not alphabet");
}