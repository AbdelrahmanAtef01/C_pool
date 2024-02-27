#include "stdio.h"

void main()
{
	int num,no_of_rotations,no_of_bits,i,mask;
	printf("please enter a num :");
	scanf("%d",&num);
	printf("please enter number of rotations :");
	scanf("%d",&no_of_rotations);
	for(i=sizeof(int)*8-1;i>=0;i--)
	{
		mask = num &(1<<i);
		if(mask>0)break;
	}
	no_of_bits = i+1;
	for(i=0;i<no_of_rotations;i++)
	{
		mask = num &1;
		num = num>>1;
		if(mask){
			num = num |(1<<(no_of_bits-1));
		}
	}
	printf("%d",num);
}