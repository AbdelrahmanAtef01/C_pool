#include "stdio.h"

void main()
{
	int num,i=2,cond=0;
	printf("please enter a number: ");
	scanf("%d",&num);
	while(i<num){
		if(num%i==0)cond = 1;
		i++;
	}
	if(cond == 1)printf("number isn\'t prime");
	else printf("number is prime");
}