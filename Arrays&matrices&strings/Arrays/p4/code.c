#include "stdio.h"

void main()
{
	int size,i,even=0,odd=0;
	int arr[size];
	printf("please enter the size of array: ");
	scanf("%d",&size);
	printf("please enter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)even +=1;
		else odd +=1;
	}
	printf("total even array elements = ");
	printf("%d",even);
	printf("\ntotal odd array elements = ");
	printf("%d",odd);
}