#include "stdio.h"

void main()
{
	int num,i ;
	printf("please enter a number:");
	scanf("%d",&num);
	for(i=0;i<=num;i++)
	{
		if(i*i==num)break;
	}
	if(i==++num)printf("there is no square root");
	else printf("the square root is %d",i);
}