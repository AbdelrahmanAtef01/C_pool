#include "stdio.h"

void main()
{
	int num,mul=1,pow,i=0;
	printf("please enter a number: ");
	scanf("%d",&num);
	printf("please enter the power: ");
	scanf("%d",&pow);
	while(i<pow){
		 mul *=num;
		 i++;
	}
	printf("%d",mul);
}