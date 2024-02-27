#include "stdio.h"
#include "math.h"

void calc_dif(int *ptr,int size,int *difference)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(abs(ptr[i]-ptr[j])>*difference) *difference = abs(ptr[i]-ptr[j]);
		}
	}
}

void main()
{
	int arr[10],size,difference=0;
	printf("please enter size of array : ");
	scanf("%d",&size);
	printf("please enter array elements : \n");
	for(int i=0;i<size;i++)
	{
	    scanf("%d",&arr[i]);
	}
	calc_dif(&arr[0],size,&difference);
	printf("the largest difference between two elements : %d",difference);
}