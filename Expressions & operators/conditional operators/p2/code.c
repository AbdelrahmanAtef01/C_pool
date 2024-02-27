#include "stdio.h"

void main(void)
{
	int num_1;
	printf("please enter a number : ");
	scanf("%d",&num_1);
	num_1 %2==0 ? printf("even"):printf("odd");
}