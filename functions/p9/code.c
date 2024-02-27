#include "stdio.h"

int prime(int num)
{
	int i,res=1;
	for(i=2;i<(num/2);i++){
	if(num%i==0)res = 0;
	}
	return res;
}

void main()
{
	int num,result;
	printf("please enter a number: ");
	scanf("%d",&num);
	result = prime(num);
	if(result==1)printf("prime number\n");
	else printf("not a prime number\n");
}