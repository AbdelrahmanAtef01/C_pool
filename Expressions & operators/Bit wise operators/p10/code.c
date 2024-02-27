#include "stdio.h"
#include "math.h"

void main(void)
{
	int num,num_1,i,j;
	printf("please enter a number to check : ");
	scanf("%d",&num);
	num_1=num;
	for(i=0;num!=0;i++)
	{
		num = num|(1<<i);
		num = num&(num-(int)pow(2,i));
	}
    for(j=0;j<i;j++)
	{
		num_1 = num_1^(1<<j);
	}
	printf("%d",num_1);
}