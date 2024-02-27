#include "stdio.h"

int sqr(int num)
{
	int i=0;
	for(i=0;i<=num;i++)
	{
		if((i*i) == num) break;
	}
	return i;
}

void main()
{
	int num,result;
	printf("please enter a number: ");
	scanf("%d",&num);
	result = sqr(num);
	if(result < num)printf("%d",result);
	else printf("there is no square root for this number");
}