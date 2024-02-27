#include "stdio.h"

void main()
{
	int size,i;
	int arr[size];
	printf("please enter the size of array: ");
	scanf("%d",&size);
	arr[0]=0;
	printf("please enter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("array elements: ");
	for(i=0;i<size;i++)
	{
		printf("%d, ",arr[i]);
	}
	
}