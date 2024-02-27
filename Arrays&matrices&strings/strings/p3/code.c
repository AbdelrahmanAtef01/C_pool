#include "stdio.h"

void main()
{
	int counter=0;
	char string[100];
	printf("please enter a string :");
	fgets(string, sizeof(string), stdin);
	for(int i =0;string[i]!='\0';i++)
	{
		counter++;
	}
	printf("the length of string is = %d",counter-1);
}