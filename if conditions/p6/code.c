#include "stdio.h"

void main()
{
	int num,i,j=0;
	int arr[8]={500,100,50,20,10,5,2,1};
	printf("please enter an amount : ");
	scanf("%d",&num);
	for(i=0;num%arr[i]!=0;i++)
	{
		if(num/arr[i]!=0)
		{
			j=num/arr[i];
			num -=j*arr[i];
			printf("%d = %d\n",arr[i],j);
		}else j=0;
	}
	printf("%d = %d\n",arr[i],num/arr[i]);
}