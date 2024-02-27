#include "stdio.h"

void main()
{
	int num,i;
	printf("please enter a number :");
	scanf("%d",&num);
	for(i=0;i<sizeof(int)*8;i++)
	{
		if(num&(1<<31))
		printf("1");
		else
		printf("0");
		num = num <<1;
	}
}