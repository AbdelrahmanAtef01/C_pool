#include "stdio.h"

void main()
{
	int i=1,n;
	printf("please enter a number: ");
	scanf("%d",&n);
	while(i<=n){printf("%d\n",i++);}
}