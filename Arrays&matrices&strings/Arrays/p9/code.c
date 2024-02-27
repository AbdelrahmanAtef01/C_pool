#include "stdio.h"

void main()
{
	int size,i;
	int arr[size];
	printf("please enter the size of array: ");
	scanf("%d",&size);
	printf("please enter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Alternate array elements: ");
	for(i=0;i<size;i++)
	{
		if((i+1)%2==1)printf("%d, ",arr[i]);
	}
	
}