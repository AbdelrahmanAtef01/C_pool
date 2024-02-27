#include "stdio.h"

int power(int num,int pow)
{
	if(pow > 0){
		return num * power(num,--pow);
		}else return 1;
}

void main()
{
	int num,pow,res;
	printf("please enter a number: ");
	scanf("%d",&num);
	printf("please enter the power: ");
	scanf("%d",&pow);
	res = power(num,pow);
	printf("the result is equal %d",res);
}