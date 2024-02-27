#include "stdio.h"

void search_arr(int *ptr,int size,int *max,int *min)
{
	*max = *min = ptr[0];
	for(int i=0;i<size;i++)
	{
		if(ptr[i]>*max) *max=ptr[i];
		if(ptr[i]<*min) *min = ptr[i];
	}
}

void main()
{
	int arr[10],size,max,min;
	int *ptr=&arr[0];
	printf("please enter size of array : ");
	scanf("%d",&size);
	printf("please enter array elements : \n");
	for(int i=0;i<size;i++)
	{
	    scanf("%d",(ptr+i));
	}
	search_arr(ptr,size,&max,&min);
	printf("the maximum is %d &the minimum is %d",max,min);
}