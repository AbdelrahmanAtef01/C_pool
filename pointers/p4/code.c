#include "stdio.h"

void print_arr(int *ptr,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d,	",ptr[i]);
	}
}

void main()
{
	int arr[10],arr_[10],size;
	int *ptr=&arr[0],*ptr_=&arr_[0];
	printf("please enter size of array : ");
	scanf("%d",&size);
	printf("please enter array elements : \n");
	for(int i=0;i<size;i++)
	{
	    scanf("%d",(ptr+i));
	}
	for(int i=0;i<size;i++)
	{
	    ptr_[i]=ptr[i];
	}
	print_arr(ptr_,size);
}