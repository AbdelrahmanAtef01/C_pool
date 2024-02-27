#include "stdio.h"

void main()
{
	int size,i,j,value;
	int arr_1[20],arr_2[20],arr[20];
	printf("please enter the size of array: ");
	scanf("%d",&size);
	printf("please enter elements of array: ");
	for(i=0;i<size;i++)
	{
		scanf("%d",&value);
		arr[i]=value;
	}
	for(i=0;i<size;i++)
	{
		for(j=1;j<(size-i);j++)
		{
			if(arr[j]<arr[j-1])
			{
				value=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=value;
			}
		}
	}
	j=0;
	printf("the even array : ");
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==0){
		arr_1[j]=arr[i];
		printf("%d, ",arr_1[j]);
		j++;}
	}
	j=0;
	printf("\nthe odd array : ");
	for(i=0;i<size;i++)
	{
		if(arr[i]%2==1){
		arr_2[j]=arr[i];
		printf("%d, ",arr_2[j]);
		j++;}
	}
}