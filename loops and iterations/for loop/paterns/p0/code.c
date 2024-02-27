#include "stdio.h"

void main()
{
	int n,i,j,k=1;
	printf("please enter a number: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<i;j++)
		{
			printf("%d ",k++);
		}
		printf("\n");
	}
}