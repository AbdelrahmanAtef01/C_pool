#include "stdio.h"

void main(void)
{
	int num;
	printf("please enter a number to check : ");
	scanf("%d",&num);
	if(num&256) printf("the number is set 1");
	else printf("the number isnot set 0");
}