#include "stdio.h"

typedef struct {int max;int min;} search;

search search_arr(int *ptr,int size)
{
	search s;
	s.max = s.min = ptr[0];
	for(int i=0;i<size;i++)
	{
		if(ptr[i]>s.max) s.max=ptr[i];
		if(ptr[i]<s.min) s.min = ptr[i];
	}
	return s;
}

void main()
{
	int arr[10],size;
	int *ptr=&arr[0];
	printf("please enter size of array : ");
	scanf("%d",&size);
	printf("please enter array elements : \n");
	for(int i=0;i<size;i++)
	{
	    scanf("%d",(ptr+i));
	}
	search s = search_arr(ptr,size);
	printf("the maximum is %d &the minimum is %d",s.max,s.min);
}