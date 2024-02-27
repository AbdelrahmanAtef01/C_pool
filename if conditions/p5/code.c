#include "stdio.h"

void main()
{
	int year;
	printf("please enter a year to check : ");
	scanf("%d",&year);
	if((year%4==0&&year%100!=0)||year%400==0)printf("the year is leap");
	else printf("the year isn\'t leap");
}