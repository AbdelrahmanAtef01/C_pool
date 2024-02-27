#include "stdio.h"

void main(void)
{
	int num,num_to_and,bits;
	printf("please enter a number to check : ");
	scanf("%d",&num);
	bits = sizeof(num)*8;
    num_to_and = 1<<(bits-1);
	if(num&num_to_and)printf("the number is set 1");
	else printf("the number isnot set 0");
}