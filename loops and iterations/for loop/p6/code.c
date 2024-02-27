#include "stdio.h"

void main()
{
	int num_1=0,num_2=1,term=0,n,i;
	printf("please enter number of n: ");
	scanf("%d",&n);
	printf("0, ");
	for(i=1;i<n;i++)
	{
		num_1 = num_2;
		num_2 = term;
		term = num_1+num_2;
		printf("%d, ",term);
	}
}