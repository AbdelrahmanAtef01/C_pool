#include "stdio.h"

void main()
{
	int term,num;
	printf("please enter a number: ");
	scanf("%d",&num);
	while(num > 0){
		 term = num-num/10*10;
		 printf("%d",term);
		 num /=10;
	}
	
}