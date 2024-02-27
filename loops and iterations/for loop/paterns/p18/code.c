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
			if(i%2==0)
			{
				printf("0");
			}else printf("1");
		}
		printf("\n");
	}
}