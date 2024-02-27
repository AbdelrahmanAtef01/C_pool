#include "stdio.h"

void main()
{
	int term=0;
	float num,num_save;
	printf("please enter a number: ");
	scanf("%f",&num);
	num_save=num;
	num /=1000000;
	while(num <= num_save){
		 num *=10;
		 term = (int)num-(int)num/10*10;
		 if((int)num != 0){
		 switch(term)
		 {
		 case 0:printf("zero ");break;
		 case 1:printf("one ");break;
		 case 2:printf("two ");break;
		 case 3:printf("three ");break;
		 case 4:printf("four ");break;
		 case 5:printf("five ");break;
		 case 6:printf("six ");break;
		 case 7:printf("seven ");break;
		 case 8:printf("eight ");break;
		 case 9:printf("nine ");break;
		 }}
	}
	
}