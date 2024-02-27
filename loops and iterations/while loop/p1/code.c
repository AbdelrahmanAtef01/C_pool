#include "stdio.h"

void main()
{
	int n;
	printf("please enter a number: ");
	scanf("%d",&n);
	while(n>=1){printf("%d\n",n--);}
}