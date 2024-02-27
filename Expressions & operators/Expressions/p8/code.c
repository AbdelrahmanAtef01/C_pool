#include "stdio.h"

void main(void)
{
	int mark_1, mark_2, mark_3, mark_4, mark_5, sum;
	float avg;
	printf("please enter marks of five subjects : ");
	scanf("%d%d%d%d%d",&mark_1,&mark_2,&mark_3,&mark_4,&mark_5);
	sum = mark_1+mark_2+mark_3+mark_4+mark_5;
	avg = (float)sum/5;
	printf("the sum : %d\nthe Average : %f\nthe percentage : %f%%",sum,avg,avg);
}