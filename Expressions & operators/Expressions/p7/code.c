#include "stdio.h"
#include "math.h"

void main(void)
{
	int num_1,num_2;
	printf("please enter base : ");
	scanf("%d", &num_1);
	printf("please enter exponent: ");
	scanf("%d", &num_2);
	printf("%d^%d = %f",num_1,num_2, pow((float)num_1,num_2));
}