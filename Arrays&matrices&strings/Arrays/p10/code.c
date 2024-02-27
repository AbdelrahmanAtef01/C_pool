#include "stdio.h"

void main()
{
	int size,i,j;
	int arr[10];
	printf("please enter the size of array: ");
	scanf("%d",&size);
	printf("please enter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]-arr[i-1]>1)size -=(arr[i]-arr[i-1]-1);
	}
	printf("missing array elements = ");
	for(i=1;i<size;i++)
	{
		if(arr[i]-arr[i-1]>1){
			for(j=arr[i-1]+1;j<arr[i];j++){printf("%d ,",j);}
		}
	}
}