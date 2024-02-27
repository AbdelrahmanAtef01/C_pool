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
	printf("negative elements: ");
	for(i=0;i<size;i++)
	{
		if(arr[i]<0)printf("%d\n",arr[i]);
	}
	
}