#include "stdio.h"

float calc(int num_1,char operation,int num_2)
{
	switch(operation)
	{
	case '+': return (float)num_1+num_2;break;
	case '-': return (float)num_1-num_2;break;
    case '/': return (float)num_1/num_2;break;
	case '*': return (float)num_1*num_2;break;
	default : printf("unknown operation");
	}
}
void main()
{
	int num_1,num_2;
	char operation;
	printf("please enter the operation you want : ");
	scanf("%d%c%c%d",&num_1,&operation,&operation,&num_2);
	printf(" = %f",calc(num_1,operation,num_2));
}