#include "stdio.h"

void print_arr(int *ptr,int size)
{
	for(int i=size;i>0;i--)
	{
		printf("%d,	",ptr[i-1]);
	}
}

void main()
{
	int arr[10],size;
	int *ptr=&arr[0];
	printf("please enter size of array : ");
	scanf("%d",&size);
	printf("please enter array elements : \n");
	for(int i=0;i<size;i++)
	{
	    scanf("%d",(ptr+i));
	}
	print_arr(ptr,size);
}