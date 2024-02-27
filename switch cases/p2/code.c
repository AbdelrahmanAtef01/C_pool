#include "stdio.h"

void main()
{
	int num;
	printf("please enter day number: ");
	scanf("%d",&num);
	switch(num)
	{
		case 1:
		printf("saturday");
		break;
		case 2:
		printf("sunday");
		break;
		case 3:
		printf("monday");
		break;
		case 4:
		printf("tuesday");
		break;
		case 5:
		printf("wendesday");
		break;
		case 6:
		printf("thursday");
		break;
		case 7:
		printf("friday");
		break;
		default:
		printf("please enter a number between 1 - 7");
		break;
	}
}