#include "stdio.h"

void arr_print(int *ptr,int size,int i)
{
	if(i<size){
	printf("%d\n",ptr[i]);
    arr_print(ptr,size,++i);
	}
}

void main()
{
	int size;
	printf("please enter array size: ");
	scanf("%d",&size);
	int arr[size];
	printf("please enter array elements: ");
	for(int i=0;i<size;i++)
	{
	scanf("%d",&arr[i]);
	}
	arr_print(&arr[0],size,0);
}