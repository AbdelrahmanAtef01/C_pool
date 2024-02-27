#include "stdio.h"

void main()
{
	int i,j;
	char string_1[100],string_2[100];
	printf("please enter first string :");
	fgets(string_1, sizeof(string_1), stdin);
	printf("please enter second string :");
	fgets(string_2, sizeof(string_2), stdin);
	for(i =0;string_1[i]!='\0';i++)
	{
		
	}
	i--;
	for(j=0;string_2[j]!='\0';i++,j++)
	{
		string_1[i]=string_2[j];
	}
	string_1[i]=string_2[j];
	printf("the concatenated string is %s",string_1);
}