#include "stdio.h"

void get_length(int* counter,char* string)
{
	for(int i=0;string[i]!='\0';i++)
	{
		(*counter)++;
	}
}

void compare(int c1,int c2)
{
	if(c1==c2)printf("both strings are equal");
	else if (c1>c2)printf("the first string is bigger than the second");
	else printf("the second string is bigger than the first one");
}

void main()
{
	int counter_1=0,counter_2=0;
	char string_1[100],string_2[100];
	printf("please enter first string :");
	fgets(string_1, sizeof(string_1), stdin);
	get_length(&counter_1,&string_1[0]);
	printf("please enter second string :");
	fgets(string_2, sizeof(string_2), stdin);
	get_length(&counter_2,&string_2[0]);
	compare(counter_1,counter_2);
}