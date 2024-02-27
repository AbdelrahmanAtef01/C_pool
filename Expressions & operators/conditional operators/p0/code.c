#include "stdio.h"

void main(void)
{
	int num_1,num_2;
	printf("please enter 2 numbers : ");
	scanf("%d%d",&num_1,&num_2);
	printf("the maximum is : ");
	num_1 > num_2 ? printf("%d",num_1):printf("%d",num_2);
}