#include "stdio.h"

void main()
{
	int num;
	printf("please enter a number to check : ");
	scanf("%d",&num);
	if(num >= 0)printf("the number is positive");
	else printf("the number is negative");
}