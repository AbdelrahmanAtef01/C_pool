#include "stdio.h"

void main()
{
	int matrix_1[5][5],matrix_2[5][5],sum[5][5],i,j,rows,columns;
	printf("please enter number of columns : ");
	scanf("%d",&columns);
	printf("please enter number of rows : ");
	scanf("%d",&rows);
	int (*matrix_1ptr)[columns]=matrix_1,(*matrix_2ptr)[columns]=matrix_2,(*sum_ptr)[columns]=sum;
	printf("please enter the first matrix : \n");
	for(i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("please enter element %d,%d : ",i,j);
	        scanf("%d",(*(matrix_1ptr + i)+j));
		}
	}
    printf("please enter the second matrix : \n");
	for(i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{
			printf("please enter element %d,%d : ",i,j);
	        scanf("%d",(*(matrix_2ptr+i)+j));
		}
	}
	   printf("\nthe sum is : \n");
	for(i=0;i<columns;i++)
	{
		for(j=0;j<rows;j++)
		{
			sum_ptr[i][j]=matrix_1ptr[i][j]+matrix_2ptr[i][j];
			printf("%d	",sum_ptr[i][j]);
		}
		printf("\n");
	}
	
}