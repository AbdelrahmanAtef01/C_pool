#include "stdio.h"

void main(void)
{
	int num_1,num_2;
	printf("please enter number 1 : ");
	scanf("%d", &num_1);
	printf("please enter number 2 : ");
	scanf("%d", &num_2);
	printf("the division = %d", (num_1/num_2));
	printf("\nthe reminder = %d", (num_1%num_2));
}