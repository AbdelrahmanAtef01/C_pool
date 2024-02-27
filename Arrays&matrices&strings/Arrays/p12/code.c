#include "stdio.h"

void main()
{
	int size_1,size_2,i,j,value;
	int arr_1[size_1],arr_2[size_1+size_2];
	printf("please enter the size of first array: ");
	scanf("%d",&size_1);
	printf("please enter elements of first array: ");
	for(i=0;i<size_1;i++)
	{
		scanf("%d",&value);
		if(value%2==1){
		arr_1[i]=value;
		arr_2[i]=value;
		}else{printf("odd numbers only");i--;}
	}
	printf("please enter the size of second array: ");
	scanf("%d",&size_2);
	printf("please enter elements of second array: ");
	for(i=size_1;i<size_2+size_1;i++)
	{
		scanf("%d",&value);
		if(value%2==0){
		arr_2[i]=value;
		}else{printf("even numbers only");i--;}
	}
	printf("the arranged array: \n");
	for(i=0;i<size_1+size_2;i++)
	{
		for(j=1;j<(size_1+size_2-i);j++)
		{
			if(arr_2[j]<arr_2[j-1])
			{
				value=arr_2[j];
				arr_2[j]=arr_2[j-1];
				arr_2[j-1]=value;
			}
		}
	}
	for(i=0;i<size_1+size_2;i++)
	{
		printf("%d, ",arr_2[i]);
	}
}