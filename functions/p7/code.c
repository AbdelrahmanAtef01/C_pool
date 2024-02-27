#include "stdio.h"
#include "math.h"
int sqr(int num,int roots)
{
	int i;
	for(i=0;i<=num;i++)
	{
		if((int)pow(i,roots) == num) break;
	}
	return i;
}

void main()
{
	int num,roots,result;
	printf("please enter a number: ");
	scanf("%d",&num);
	printf("please enter number of roots: ");
	scanf("%d",&roots);
	result = sqr(num,roots);
	if(result < num)printf("%d",result);
	else printf("there is no square root for this number");
}