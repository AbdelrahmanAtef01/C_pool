#include "stdio.h"
#include "math.h"

int prime(int num)
{
	int i,res=1;
	for(i=2;i<(num/2);i++){
	if(num%i==0)res = 0;
	}
	return res;
}

int armstrong(int num)
{
	int digits,num_1,num_2,i,term,sum=0;
	num_2 = num_1 = num;
	for(digits=0;num>0;digits++)
	{
		num /=10;
	}
	while(num_1>0)
	{
		term = num_1 - num_1/10*10;
		num_1 /=10;
		sum += pow(term,digits);
	}
	if(num_2 == sum) return 1;
	else return 0;
}

int perfect(int num)
{
	int sum=0,div,i;
	for(i=1;i<num;i++)
	{
		if(num%i==0)sum +=i;
	}
	if(num==sum)return 1;
	else return 0;
}

void main()
{
	int num,result_1,result_2,result_3;
	printf("please enter a number: ");
	scanf("%d",&num);
	result_1 = prime(num);
	result_2 = armstrong(num);
	result_3 = perfect(num);
	if(result_1==1)printf("prime number\n");
	else printf("not a prime number\n");
	if(result_2==1)printf("Armstrong number\n");
	else printf("not an Armstrong number\n");
	if(result_3==1)printf("perfect number\n");
	else printf("not a perfect number\n");
}