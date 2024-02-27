#include "stdio.h"

void calc_duplicates(int *ptr,int size,int *num,int *i)
{
	for(*i=0;*i<size;(*i)++)
	{
		for(int j=*i+1;j<size;j++)
		{
			if(ptr[*i]==ptr[j])(*num)++;
		}
		if(*num>1)break;
	}
}

void main()
{
	int arr[10],size,num=1,i;
	printf("please enter size of array : ");
	scanf("%d",&size);
	printf("please enter array elements : \n");
	for(int i=0;i<size;i++)
	{
	    scanf("%d",&arr[i]);
	}
	calc_duplicates(&arr[0],size,&num,&i);
	printf("the number %d is duplicated %d times",arr[i],num);
}