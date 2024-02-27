#include "stdio.h"

void main(void)
{
	int a,b,c,d;
	printf("please enter 4 numbers : ");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(c-d!=0) printf("%d",(a+b)/(c-d));
	else printf("math error");
}