#include "stdio.h"

void copy_str(char *string_1,char *string_2)
{
	for(int i=0;string_1[i]!='\0';i++)
	{
		string_2[i]=string_1[i];
	}
}

void main()
{
	char string_1[100],string_2[100];
	printf("please enter the string :");
	fgets(string_1, sizeof(string_1), stdin);
	copy_str(&string_1[0],&string_2[0]);
	printf("the second string is %s",string_2);
}