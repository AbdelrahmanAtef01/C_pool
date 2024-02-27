#include "stdio.h"

void main()
{
	int num_1;
	printf("please enter a number to check : ");
	scanf("%d",&num_1);
	switch(num_1%2==0)
	{
	case 0:printf("odd number");break;
	default:printf("even number");break;
	}
}