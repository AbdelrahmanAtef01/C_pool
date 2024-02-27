#include "stdio.h"

int reverse(int num)
{
	int term;
	if(num > 0){
		 term = num-num/10*10;
		 printf("%d",term);
		 return reverse(num /=10);
	}else return 0;
}

void main()
{
	int num,res;
	printf("please enter a number: ");
	scanf("%d",&num);
	printf("the reverse of the number is: ");
	res = reverse(num);
}