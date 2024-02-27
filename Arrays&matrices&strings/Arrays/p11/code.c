#include "stdio.h"

void main()
{
	int size_1,size_2,i,j,value;
	float median;
	int arr_1[size_1],arr_2[size_2],arr[size_1+size_2];
	printf("please enter the size of first array: ");
	scanf("%d",&size_1);
	printf("please enter elements of first array: ");
	for(i=0;i<size_1;i++)
	{
		scanf("%d",&value);
		arr_1[i]=value;
		arr[i]=value;
	}
	printf("please enter the size of second array: ");
	scanf("%d",&size_2);
	printf("please enter elements of second array: ");
	for(i=size_1+1;i<size_2+size_1+1;i++)
	{
		scanf("%d",&value);
		arr_2[i-size_1]=value;
		arr[i]=value;
	}
	printf("the median : ");
	for(i=0;i<size_1+size_2;i++)
	{
		for(j=1;j<(size_1+size_2-i);j++)
		{
			if(arr[j]<arr[j-1])
			{
				value=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=value;
			}
		}
	}
	if((size_1+size_2)%2==0) median= (arr[(size_1+size_2)/2-1]+arr[(size_1+size_2)/2])/2.0;
	else median= arr[(size_1+size_2)/2+1];
	printf("%f ",median);
}