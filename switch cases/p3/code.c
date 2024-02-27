#include "stdio.h"

void main()
{
	int num_1,num_2;
	printf("please enter two numbers to compare : ");
	scanf("%d%d",&num_1,&num_2);
	switch(num_1>num_2)
	{
	case 0:printf("%d",num_2);break;
	default:printf("%d",num_1);break;
	}
}