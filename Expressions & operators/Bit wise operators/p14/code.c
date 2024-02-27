#include "stdio.h"

void main()
{
	int num;
	printf("please enter a number :");
	scanf("%d",&num);
	if(num&1)printf("odd");
	else printf("even");
}