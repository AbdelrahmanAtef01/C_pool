#include "stdio.h"

int even(int num)
{
	if(num%2==0)return 1;
	else return 0;
}

void main()
{
	int num,result;
	printf("please enter a number: ");
	scanf("%d",&num);
	result = even(num);
	if(result==1)printf("even number");
	else printf("odd number");
}