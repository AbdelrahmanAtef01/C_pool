#include "stdio.h"

int compare(int num_1,int num_2)
{
	if (num_1 >= num_2)return num_1;
	else return num_2;
}

void main()
{
	int num_1,num_2,max,min;
	printf("please enter 2 numbers to compare: ");
	scanf("%d%d",&num_1,&num_2);
	max = compare(num_1,num_2);
	if (max==num_1) min = num_2;
	else min = num_1;
	printf("max = %d\nmin = %d",max,min);
}