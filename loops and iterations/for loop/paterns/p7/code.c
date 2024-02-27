#include "stdio.h"

void main()
{
	int n,rows,i,j;
	printf("press 1 for inverted right triangle or 2 for mirrored inverted right triangle \n");
	scanf("%d",&n);
	if (n==1||n==2){
		printf("please enter number of rows: ");
		scanf("%d",&rows);
		rows;
	}else{
		printf("wrong number");
	}
	if(n==1){
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=rows;j++)
		{
			if(j==1||j==rows-i+1||i==1)
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
		for(j=1;j<=rows;j++)
		{
			if(j==rows||j==i||i==1)
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
	}
}