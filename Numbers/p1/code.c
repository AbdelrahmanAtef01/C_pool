#include "stdio.h"
#include "math.h"

void main()
{
	int octal_num,i,num=0;
	printf("please enter a number:");
	scanf("%d",&octal_num);
	int num_cpy=octal_num;
	for(i=0;num_cpy>0;i++)
	{
		num_cpy /=10;
	}
	for(;i>0;i--)
	{
		num_cpy=octal_num/(int)pow(10,i-1);
		num +=num_cpy*(int)pow(8,i-1);
		octal_num -= num_cpy*(int)pow(10,i-1);
	}
	num_cpy=num;
	for(i=0;num_cpy>0;i++)
	{
		num_cpy/=2;
	}
	for(;i>0;i--)
	{
		if(num /(int)pow(2,i-1)==1){printf("1");num -=(int)pow(2,i-1);}
		else printf("0");
	}
	
}