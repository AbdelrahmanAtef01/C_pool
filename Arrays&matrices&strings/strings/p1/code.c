#include "stdio.h"

void main()
{
	int vowel_counter=0,constant_counter=0,space_counter=0,number_counter=0;
	char string[100];
	printf("please enter a string :");
	fgets(string, sizeof(string), stdin);
	for(int i =0;string[i]!='\0';i++)
	{
		if(string[i]==97||string[i]==101||string[i]==105||string[i]==111||string[i]==117||string[i]==65||string[i]==69||string[i]==73||string[i]==79||string[i]==85)vowel_counter++;
		else if((string[i]>=65&&string[i]<=90)||(string[i]>=97&&string[i]<=122))constant_counter++;
		else if(string[i]==32)space_counter++;
		else if(string[i]>=48&&string[i]<=57)number_counter++;
	}
	printf("vowels = %d\nconsonants = %d\ndigits = %d\nspaces = %d",vowel_counter,constant_counter,number_counter,space_counter);
}