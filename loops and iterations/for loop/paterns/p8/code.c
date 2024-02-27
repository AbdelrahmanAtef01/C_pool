#include "stdio.h"

void main()
{
	int n,rows,i,j;
	printf("press 1 for pyramid star or 2 for inverted pyramid star \n");
	scanf("%d",&n);
	if (n==1||n==2){
		printf("please enter number of rows: ");
		scanf("%d",&rows);
	}else{
		printf("wrong number");
	}
	if(n==1){
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows*2-1;j++)
		{
			if(j==rows+i-1||j==rows-i+1||i==rows)
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
	}
	else if(n==2){
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows*2-1;j++)
		{
			if(j==rows*2-i||j==i||i==1)
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
	}
}