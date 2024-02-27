#include "stdio.h"

void main()
{
	int size,i,value,position;
	int arr[size];
	printf("please enter the size of array: ");
	scanf("%d",&size);
	printf("please enter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter value to change: ");
	scanf("%d",&value);
	printf("enter position of change: ");
	scanf("%d",&position);
	arr[position-1]=value;
	printf("the array after change: \n");
	for(i=0;i<size;i++)
	{
		printf("%d, ",arr[i]);
	}
}