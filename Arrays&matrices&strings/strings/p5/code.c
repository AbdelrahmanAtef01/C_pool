#include "stdio.h"

void main()
{
	char string_1[100],string_2[100];
	printf("please enter the string :");
	fgets(string_1, sizeof(string_1), stdin);
	for(int i=0;string_1[i]!='\0';i++)
	{
		string_2[i]=string_1[i];
	}
	printf("the string is %s",string_2);
}