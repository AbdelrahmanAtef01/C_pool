#include "stdio.h"

void main(void)
{
	int year;
	printf("please enter a year : ");
	scanf("%d",&year);
	year %4==0 ? printf("leap year"):printf("common year");
}