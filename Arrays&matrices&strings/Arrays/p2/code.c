#include "stdio.h"

void main()
{
	int size,i,sum=0;
	int arr[size];
	printf("please enter the size of array: ");
	scanf("%d",&size);
	printf("please enter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("sum of array elements = ");
	for(i=0;i<size;i++)
	{
		sum +=arr[i];
	}
	printf("%d",sum);
}