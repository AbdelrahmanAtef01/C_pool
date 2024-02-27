#include "stdio.h"
#include "math.h"

void main(void)
{
	int num,i;
	printf("please enter a number to check : ");
	scanf("%d",&num);
	for(i=0;num!=0;i++)
	{
		num = num|(1<<i);
		num = num&(num-(int)pow(2,i));
	}
    printf("%d",i);
}