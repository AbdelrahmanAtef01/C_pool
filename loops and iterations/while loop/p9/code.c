#include "stdio.h"

void main()
{
	int term,num,num_save,check;
	printf("please enter a number: ");
	scanf("%d",&num);
	num_save = num;
	while(num > 0){
		 term = num-num/10*10;
		 check = check*10+term;
		 num /=10;
	}
	if(check==num_save)printf("the number is palindrome");
	else printf("the number isn\'t palindrome");
	
}