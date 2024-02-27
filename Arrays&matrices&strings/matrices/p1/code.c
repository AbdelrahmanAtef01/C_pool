#include "stdio.h"

void main()
{
	int matrix_1[5][5],matrix_2[5][5],mul[5][5],i,j,k,l,rows_1,columns_1,rows_2,columns_2;
	printf("please enter number of columns : ");
	scanf("%d",&columns_1);
	printf("please enter number of rows : ");
	scanf("%d",&rows_1);
	printf("please enter number of columns : ");
	scanf("%d",&columns_2);
	printf("please enter number of rows : ");
	scanf("%d",&rows_2);
	if(columns_1 != rows_2)printf("cann\'t be multiplied");
	else{
	printf("please enter the first matrix : \n");
	for(i=0;i<rows_1;i++)
	{
		for(j=0;j<columns_1;j++)
		{
			printf("please enter element %d,%d : ",i,j);
	        scanf("%d",&matrix_1[i][j]);
		}
	}
    printf("please enter the second matrix : \n");
	for(i=0;i<rows_2;i++)
	{
		for(j=0;j<columns_2;j++)
		{
			printf("please enter element %d,%d : ",i,j);
	        scanf("%d",&matrix_2[i][j]);
		}
	}
	printf("\nthe output matrix is : \n");
	for(i=0;i<rows_1;i++)
	{
		for(j=0;j<columns_2;j++)
		{
			mul[i][j]=0;
			for(k=0,l=0;k<rows_2&&l<columns_1;k++,l++)
			{
				mul[i][j]+= matrix_1[i][l]*matrix_2[k][j];
			}
			printf("%d	",mul[i][j]);
		}
		printf("\n");
	}
	}
}