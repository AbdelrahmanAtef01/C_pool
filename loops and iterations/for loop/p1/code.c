#include "stdio.h"

void main()
{
	int i,sum=0;
	for(i=1;i<=10;i++)
	{
		printf("%d ",i);
		sum+=i;
	}
	printf("\nsum is equal: %d",sum);
}