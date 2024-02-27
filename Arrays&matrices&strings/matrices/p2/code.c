#include "stdio.h"

void main()
{
	int matrix[5][5],out[5][5],i,j,rows,columns;
	printf("please enter number of columns : ");
	scanf("%d",&columns);
	printf("please enter number of rows : ");
	scanf("%d",&rows);
	printf("please enter the matrix : \n");
	for(i=0;i<rows;i++)
	{
		for(j=0;j<columns;j++)
		{
			printf("please enter element %d,%d : ",i,j);
	        scanf("%d",&matrix[i][j]);
		}
	}
	printf("\nthe output matrix is : \n");
	for(i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{
			out[i][j]=matrix[j][i];
			printf("%d	",out[i][j]);
		}
		printf("\n");
	}
}