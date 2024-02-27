#include "stdio.h"

void main()
{
	char string[100];
	int j;
	printf("please enter a string :");
	fgets(string, sizeof(string), stdin);
	for(int i =0;string[i]!='\0';i++)
	{
		if(!((string[i]>=65&&string[i]<=90)||(string[i]>=97&&string[i]<=122))){
			for(j = i;string[j]!='\0';j++){
				string[j]=string[j+1];
			}
			--i;
		}
	}
	printf("%s",string);
}