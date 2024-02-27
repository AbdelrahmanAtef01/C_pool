#include "stdio.h"

void get_length(int* counter,char* string)
{
	for(int i =0;string[i]!='\0';i++)
	{
		(*counter)++;
	}
}

void main()
{
	int counter=0;
	char string[100];
	printf("please enter a string :");
	fgets(string, sizeof(string), stdin);
	get_length(&counter,&string[0]);
	printf("the length of string is = %d",counter-1);
}