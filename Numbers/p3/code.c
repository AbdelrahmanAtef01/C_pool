#include "stdio.h"
#include "math.h"

void main()
{
	int j,i,num,num_cpy,num_cpy_2,mask;
	printf("please enter a number:");
	scanf("%d",&num);
	num_cpy=num;
	for(i=0;num_cpy>0;i++)
	{
		num_cpy /=10;
	}
	num_cpy=0;
	num_cpy_2=num;
	for(j=i;j>0;j--)
	{
		mask=num/(int)pow(10,j-1);
		num_cpy +=(int)pow(mask,i);
		num -= mask*(int)pow(10,j-1);
	}
	if(num_cpy == num_cpy_2)printf("Armstrong number");
	else printf("not an armstrong number");
	
}