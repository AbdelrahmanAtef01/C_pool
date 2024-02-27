#include "stdio.h"

void main()
{
	int n,i;
	float sum=0;
	printf("please enter n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum += 1.0/i;
		printf("%f \n",sum);
	}
}