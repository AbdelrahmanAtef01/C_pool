#include "stdio.h"
#include "math.h"

void main()
{
	int binary_num,num,i,mask;
	printf("please enter a binary number :");
	scanf("%d",&binary_num);
	int binary_num_cpy=binary_num;
	for(i=0;binary_num_cpy>0;i++)
	{
		binary_num_cpy /=10;
	}
	for(--i;i>=0;i--)
	{
		mask = binary_num/(int)pow(10,i);
		num += mask*(int)pow(2,i);
		binary_num -= mask*(int)pow(10,i);
	}
	printf("%d",num);
}