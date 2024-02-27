#include "stdio.h"
#include "math.h"

void main(void)
{
	int num,i,num_1,num_2;
	printf("please enter a number to check : ");
	scanf("%d",&num);
	num_2=num;
	for(i=0;num ==num_2;i++)
	{
		num_1 = num|(1<<i);
		num = num&(num_1-(int)pow(2,i));
	}
    printf("%d",i-1);
}