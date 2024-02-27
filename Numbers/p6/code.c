#include "stdio.h"
#include "math.h"

void main()
{
	int octal_num=0,num,mask,i;
	printf("please enter a number :");
	scanf("%d",&num);
	for(i=0;;i++)
	{
		if(num/(int)pow(8,i)==0)break;
	}
	for(--i;i>=0;i--)
	{
		mask = num/(int)pow(8,i);
		octal_num += mask*(int)pow(10,i);
		num -= mask*(int)pow(8,i);
	}
	printf("%d",octal_num);
}