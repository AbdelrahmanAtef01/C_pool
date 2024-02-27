#include "stdio.h"

void swap(int *a,int *b,int *c)
{
	int temp = *a;
	*a = *b;
	*b = *c;
	*c = temp;
}

void main()
{
	int a,b,c;
	printf("please enter a,b and c :\na = ");
	scanf("%d",&a);
	printf("b = ");
	scanf("%d",&b);
	printf("c = ");
	scanf("%d",&c);
	swap(&a,&b,&c);
	printf("a = %d\nb = %d\nc = %d",a,b,c);
}