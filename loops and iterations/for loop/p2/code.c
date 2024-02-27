#include "stdio.h"

void main()
{
	int i,sum=0,num;
	float avg;
	for(i=1;i<=10;i++)
	{
		printf("please enter number_%d: ",i);
		scanf("%d",&num);
		sum += num;
	}
	avg = sum/10.0;
	printf("\nsum is equal: %d",sum);
	printf("\nAverage is equal: %f",avg);

}