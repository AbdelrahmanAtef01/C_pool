#include "stdio.h"

void main()
{
	int num,i;
	float sum=1;
	printf("please enter a number: ");
	scanf("%d",&num);
	printf("1");
	for(i=2;i<=num;i++)
	{
		printf("+1/%d",i);
		sum +=1.0/i;
	}
	printf("\nthe sum is: %f",sum);
}