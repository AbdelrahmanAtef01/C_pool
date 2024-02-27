#include "stdio.h"

void main()
{
	int salary,gross;
	printf("please enter your salary: ");
	scanf("%d",&salary);
	if(salary<=10000) gross=2*salary;
	else if(salary<=20000)gross=2.15*salary;
	else gross=2.25*salary;
	printf("gross salary = %d",gross);
}