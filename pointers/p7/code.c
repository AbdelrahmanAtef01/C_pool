#include "stdio.h"

void search_arr(int *ptr,int size,int search,int *found)
{
	for(int i=0;i<size;i++)
	{
		if(ptr[i]==search){*found =i;break;}
	}
}

void main()
{
	int arr[10],size,search,found;
	int *ptr=&arr[0];
	printf("please enter size of array : ");
	scanf("%d",&size);
	printf("please enter array elements : \n");
	for(int i=0;i<size;i++)
	{
	    scanf("%d",(ptr+i));
	}
	printf("please enter a value to search: ");
	scanf("%d",&search);
	search_arr(ptr,size,search,&found);
	printf("the element %d is found at position %d",search,found);
}