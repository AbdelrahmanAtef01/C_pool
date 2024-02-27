#include "stdio.h"

void main()
{
	int i,num_1,num_2,num_3,lcm;
	printf("please enter 2 numbers : \n");
	scanf("%d%d",&num_1,&num_2);
	if(num_1>num_2)
	{
		num_3=num_1;
		num_1=num_2;
		num_2=num_3;
	}
	for(i=2;num_2%(num_1*i)!=0;i++)
	{
		//printf("%d",i);
	}
	lcm = num_1*i;
	printf("the lcm is equal: %d",lcm);
}