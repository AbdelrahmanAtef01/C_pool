#include "stdio.h"

void main()
{
	int size,i,position;
	int arr[size];
	printf("please enter the size of array: ");
	scanf("%d",&size);
	printf("please enter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("enter position of change: ");
	scanf("%d",&position);
	if(position-1<=size)arr[position-1]=0;
	else printf("not a position");
	printf("the array after change: \n");
	for(i=0;i<size;i++)
	{
		if(arr[i]!=0)printf("%d, ",arr[i]);
	}
}