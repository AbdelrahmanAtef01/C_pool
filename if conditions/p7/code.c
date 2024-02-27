#include "stdio.h"

void main()
{
	int sell,cost;
	printf("please enter cost price : ");
	scanf("%d",&cost);
	printf("please enter selling price : ");
	scanf("%d",&sell);
	if(sell>cost)printf("profit = %d",sell-cost);
	else printf("loss = %d",cost-sell);
}