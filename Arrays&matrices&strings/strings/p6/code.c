#include "stdio.h"

void main()
{
	char string[100];
	int j;
	printf("please enter a string :");
	fgets(string, sizeof(string), stdin);
	for(int i =1;string[i]!='\0';i++)
	{
		if((string[i]==9||string[i]==32)&&(string[i-1]==32||string[i-1]==9)){
			for(j = i;string[j]!='\0';j++){
				string[j]=string[j+1];
			}
			--i;
		}
	}
	printf("%s",string);
}