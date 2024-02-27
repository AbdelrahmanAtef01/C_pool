#include "stdio.h"

void main(void)
{
	int num_1,num_2;
	printf("please enter number 1 : ");
	scanf("%d", &num_1);
	printf("please enter number 2 : ");
	scanf("%d", &num_2);
	num_2 +=num_1;
	num_1 = num_2 - num_1;
	num_2 -= num_1;
	printf("number 1 :  %d", num_1);
	printf("\nnumber 2 : %d", num_2);
}