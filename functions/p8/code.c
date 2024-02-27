#include "stdio.h"
#include "math.h"

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

void main()
{
	int num,result;
	printf("please enter a number: ");
	scanf("%d",&num);
	result = armstrong(num);
	if(result==1)printf("Armstrong number\n");
	else printf("not an Armstrong number\n");
}