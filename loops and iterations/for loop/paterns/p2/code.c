#include "stdio.h"

void main()
{
	int n,rows,columns,i,j;
	printf("press 1 for a square or 2 for a rectangle \n");
	scanf("%d",&n);
	if (n==1){
		printf("please enter number of rows: ");
		scanf("%d",&rows);
		columns=rows;
	}else if(n==2){
		printf("please enter number of rows: ");
		scanf("%d",&rows);
		printf("please enter number of columns: ");
		scanf("%d",&columns);
	}else{
		printf("wrong number");
	}
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=columns;j++)
		{
			if(i==1||i==rows||j==1||j==columns||i==j||j==columns-i+1)
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
}