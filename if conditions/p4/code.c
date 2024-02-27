#include "stdio.h"

void main()
{
	int arr[5],arr_[5];
	int i;
	printf("please enter 5 numbers to check : ");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%3==0)arr_[i]=arr[i];
	}
	for(i=0;i<5;i++)
	{
		if(arr_[i]==arr[i])printf("%d\n",arr_[i]);
	}
	
}