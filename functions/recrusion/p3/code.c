#include "stdio.h"

int i = 0;

int print(int n)
{
	if(i%2==0)printf("%d, ",i);
	i++;
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