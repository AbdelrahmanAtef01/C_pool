#include "stdio.h"

void main()
{
	int counter=0;
	char string[100],ch;
	printf("please enter a string :");
	fgets(string, sizeof(string), stdin);	
	printf("please enter a character to search :");
	scanf("%c",&ch);
	for(int i =0;string[i]!='\0';i++)
	{
		if(string[i]==ch)counter++;
	}
	printf("the character %c is repeated %d times",ch,counter);
}