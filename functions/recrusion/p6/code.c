#include "stdio.h"

int sum_=0;

int sum(int num)
{
	int term;
	if(num > 0){
		 term = num-num/10*10;
		 sum_ +=term;
		 return sum(num /=10);
	}else return sum_;
}

void main()
{
	int num,res;
	printf("please enter a number: ");
	scanf("%d",&num);
	res = sum(num);
	printf("the sum of number digits is: %d",res);

}