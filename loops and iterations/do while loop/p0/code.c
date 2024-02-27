#include "stdio.h"

void main()
{
	int num,exit=1;
	do{
		printf("please enter a number to check: ");
		scanf("%d",&num);
		if(num>0)printf("positive");
		else if(num<0)printf("negative");
		else printf("zero");
		printf("\npress 1 to continue or 0 to exit\n");
		scanf("%d",&exit);
	}while(exit==1);
}