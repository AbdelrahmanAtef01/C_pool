#include "stdio.h"

void get_length(int* counter,char* string)
{
	for(int i=0;string[i]!='\0';i++)
	{
		(*counter)++;
	}
}

void reverse_str(char *string_1,char *string_2,int *counter)
{
	int i,j;
	get_length(counter,string_1);
	for(i=0,j=*counter-2;j>=0;i++,j--)
	{
		string_2[i]=string_1[j];
	}
	string_2[i]='\0';
}

void main()
{
	int counter = 0;
	char string_1[100],string_2[100];
	printf("please enter the string :");
	fgets(string_1, sizeof(string_1), stdin);
	reverse_str(&string_1[0],&string_2[0],&counter);
	printf("the reversed string is %s",string_2);
}