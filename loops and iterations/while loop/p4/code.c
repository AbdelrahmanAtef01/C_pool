#include "stdio.h"

void main()
{
	int first,last,num;
	printf("please enter a number: ");
	scanf("%d",&num);
	first = num-num/10*10;
	while(num/10 != 0){
		 num /= 10;
	}
	last=num;
	printf("%d",first+last);
}