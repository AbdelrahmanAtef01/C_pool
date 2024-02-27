#include "stdio.h"

void main()
{
	int size,i,value;
	int arr[20],arr_[20];
	printf("please enter the size of array: ");
	scanf("%d",&size);
	printf("please enter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&value);
		arr[i]=value;
	}
	printf("please enter number of times to rotate: ");
	scanf("%d",&value);
	for(i=0;i<value;i++)
	{
		arr_[i]=arr[i];
	}
	for(i=0;i<size-value;i++)
	{
		arr[i]=arr[value+i];
	}
	for(i=size-value;i<size;i++)
	{
		arr[i]=arr_[i-(size-value)];
	}
	printf("array after rotation :");
	for(i=0;i<size;i++)
	{
		printf("%d, ",arr[i]);
	}
}