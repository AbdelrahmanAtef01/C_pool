#include "stdio.h"

int cube(int num)
{
	return num*num*num;
}

void main()
{
	int num,result;
	printf("please enter a number: ");
	scanf("%d",&num);
	result = cube(num);
	printf("the result is %d",result);
}