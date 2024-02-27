#include "stdio.h"

void main()
{
	int rows,columns,i,j;
	printf("please enter number of rows: ");
	scanf("%d",&rows);
	printf("please enter number of columns: ");
	scanf("%d",&columns);
	for(i=1;i<=rows;i++)
	{
		for(j=1;j<=columns;j++)
		{
			if(j==i||j==columns-i+1)
			{
				printf("1");
			}else printf("0");
		}
		printf("\n");
	}
}