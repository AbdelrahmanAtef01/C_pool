#include "stdio.h"

void remove_duplicates(int *ptr,int size)
{
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(ptr[i]==ptr[j]&&ptr[i]!=0)ptr[j]=0;
		}
	}
}

void print_arr(int *ptr,int size)
{
	for(int i=0;i<size;i++)
	{
		if(ptr[i]!=0)printf("%d,	",ptr[i]);
	}
}

void main()
{
	int arr[10],size;
	printf("please enter size of array : ");
	scanf("%d",&size);
	printf("please enter array elements : \n");
	for(int i=0;i<size;i++)
	{
	    scanf("%d",&arr[i]);
	}
	remove_duplicates(&arr[0],size);
	print_arr(&arr[0],size);
}