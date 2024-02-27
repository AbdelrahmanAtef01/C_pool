#include "stdio.h"

void main()
{
	int arr[50],size,x,i,ceiling,floor,max,min;
	printf("please enter size of array :");
	scanf("%d",&size);
	printf("please enter elements of array :");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("please enter x :");
	scanf("%d",&x);
	ceiling=floor=min=max=arr[0];
	for(i=0;i<size;i++)
	{
		if(arr[i]>ceiling)ceiling=max=arr[i];
		if(arr[i]<floor)floor=min=arr[i];
	}
	for(i=0;i<size;i++)
	{
		if(arr[i]<x&&arr[i]>floor)floor=arr[i];
		if(arr[i]>x&&arr[i]<ceiling)ceiling=arr[i];
	}
	if(min>=x&&max<=x)printf("there is no ceiling or floor for %d",x);
	else if(max<=x)printf("there is no ceiling for %d & the floor is %d",x,floor);
	else if(min>=x)printf("there is no floor for %d & the ceiling is %d",x,ceiling);
	else printf("the ceiling is %d & the floor is %d",ceiling,floor);
}