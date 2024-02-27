#include "stdio.h"

void main()
{
	int num_1,num_2;
	printf("please enter first num :");
	scanf("%d",&num_1);
	printf("please enter second num :");
	scanf("%d",&num_2);
	num_1 ^=num_2;
	num_2 ^=num_1;
	num_1 ^=num_2;
	printf("%d\n%d",num_1,num_2);
}