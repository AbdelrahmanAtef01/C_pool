#include "stdio.h"

int i = 1;

int print(int n)
{
	printf("%d, ",i++);
	if(i<=n) return print(n);
	else return 0;
}

void main()
{
	int num,res;
	printf("please enter a number: ");
	scanf("%d",&num);
	res = print(num);
}