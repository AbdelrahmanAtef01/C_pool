#include "stdio.h"

void main()
{
	char ch;
	printf("please enter a character to check : ");
	scanf("%c",&ch);
	if(ch =='a'||ch=='e'||ch=='o'||ch=='i'||ch=='u')printf("the character is vowel");
	else printf("the character is consonant");
}