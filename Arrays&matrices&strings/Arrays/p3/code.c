#include "stdio.h"

void main()
{
	int size,i,max,second_max;
	int arr[size];
	printf("please enter the size of array: ");
	scanf("%d",&size);
	printf("please enter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	max=second_max=arr[0];
	printf("maximum between array elements = ");
	for(i=0;i<size;i++)
	{
		if(arr[i]>max)max=arr[i];
	}
	printf("%d",max);
	printf("\nsecond maximum between array elements = ");
	for(i=0;i<size;i++)
	{
		if(arr[i]>second_max&&arr[i]<max)second_max=arr[i];
	}
	printf("%d",second_max);
}