#include "stdio.h"

void main()
{
	int i,j,cons=0;
	char arr[10],arr_[10];
	char a=122;
	printf("please enter 10 characters to order: ");
	for(i=0;i<10;i++)
	{
		scanf("%c%c",&arr[i],&arr[i]);
	}
	for(j=0;j<10;j++)
	{
		for(i=0;i<10;i++)
		{
			/*if(arr[i]<arr[i-1]){if(arr[i]<a||j==0)a = arr[i];}*/
			if(arr[i]<a&&arr[i]>cons)a=arr[i];
		}
		arr_[j]=cons=a;
		a=122;
	}
	for(j=0;j<10;j++)
	{
		printf("%c\n",arr_[j]);
	}
}