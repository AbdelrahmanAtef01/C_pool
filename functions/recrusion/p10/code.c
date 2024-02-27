#include "stdio.h"

int max,min;

void arr_search(int *ptr,int size,int i)
{
	if(i<size){
	if(ptr[i]>max)max = ptr[i];
	if(ptr[i]<min)min = ptr[i];	
    arr_search(ptr,size,++i);
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
	max=min=arr[0];
	arr_search(&arr[0],size,0);
	printf("maximum = %d\nminimum = %d\n",max,min);
}