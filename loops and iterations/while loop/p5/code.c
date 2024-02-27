#include "stdio.h"

void main()
{
	int term,num,sum;
	printf("please enter a number: ");
	scanf("%d",&num);
	while(num/10 != 0){
		 term = num-num/10*10;
		 sum +=term;
		 num /=10;
	}
	sum +=num;
	printf("%d",sum);
}