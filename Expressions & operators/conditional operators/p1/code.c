#include "stdio.h"

void main(void)
{
	int num_1,num_2,num_3;
	printf("please enter 3 numbers : ");
	scanf("%d%d%d",&num_1,&num_2,&num_3);
	printf("the maximum is : ");
	num_1 > num_2 ? num_1>num_3? printf("%d",num_1):printf("%d",num_3):num_2>num_3?printf("%d",num_2):printf("%d",num_3);
}