#include "stdio.h"

void main(void)
{
	int num;
	printf("please enter a number to check : ");
	scanf("%d",&num);
	num = num&255;
    printf("%d",num);
}