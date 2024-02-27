#include "stdio.h"

int fact(int n)
{
	int factorial =1;
	for(;n>0;n--)
	{
		factorial *=n;
	}
	return factorial;
}

float ncr(int n,int r)
{
	return (float)fact(n)/(float)(fact(n-r)*fact(r));
}

float npr(int n,int r)
{
	return (float)fact(n)/(float)fact(n-r);
}

void main()
{
	int n,r;
	printf("please enter the value of N and R: ");
	scanf("%d%d",&n,&r);
	printf("NCR = %f\nNPR = %f",ncr(n,r),npr(n,r));
}