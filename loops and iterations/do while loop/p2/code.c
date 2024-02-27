#include "stdio.h"

void main()
{
	int sum=0,num=1;
	printf("to exit enter 0\n");
	do{
		printf("please enter a number: ");
		scanf("%d",&num);
		sum +=num;
	}while(num !=0);
	printf("sum = %d",sum);
}