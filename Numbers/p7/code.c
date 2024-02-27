#include "stdio.h"
#include "math.h"

void main()
{
	int octal_num=0,num,mask,i;
	printf("please enter an octal number :");
	scanf("%d",&octal_num);
	int octal_num_cpy=octal_num;
	for(i=0;octal_num_cpy>0;i++)
	{
		octal_num_cpy /=10;
	}
	for(--i;i>=0;i--)
	{
		mask = octal_num/(int)pow(10,i);
		num += mask*(int)pow(8,i);
		octal_num -= mask*(int)pow(10,i);
	}
	printf("%d",num);
}