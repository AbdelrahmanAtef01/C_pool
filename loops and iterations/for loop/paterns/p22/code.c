#include "stdio.h"

void main()
{
	int i,j,k,num;
	int arr[10];
	printf("please enter a number: ");
	scanf("%d",&num);
	for(k=0;num!=0;k++)
	{
		arr[k]=num-num/10*10;
		num /=10;
	}
	for(i=0;i<=k;i++)
	{
		for(j=1;j<=k+1;j++)
		{
			if(j<k-i+1)
			{
				printf("%d",arr[k-j]);
			}else printf(" ");
		}
		printf("\n");
	}
}