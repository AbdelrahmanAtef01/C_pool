#include "stdio.h"

void main()
{
	int num,i=0;
	printf("please enter a number: ");
	scanf("%d",&num);
	while(num > 0){
		 i++;
		 num /=10;
	}
	printf("%d",i);
}