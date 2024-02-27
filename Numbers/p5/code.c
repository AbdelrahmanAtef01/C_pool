#include "stdio.h"

int check_prime(int num)
{
	int decision=1;
	for(int i=2;i<num;i++)
	{
		if(num%i==0)decision=0;
	}
	return decision;
}

void main()
{
	int num,num_1;
	printf("please enter a number :");
	scanf("%d",&num);
	for(int i=1;i<=num/2;i++)
	{
		if(check_prime(i)==1&&check_prime(num-i)==1){
			printf("%d = %d + %d\n",num,i,num-i);
		}
	}
}