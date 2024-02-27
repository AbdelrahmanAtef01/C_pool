#include "stdio.h"

void main()
{
	int n,rows,columns,i,j;
	printf("press 1 for rhombus or 2 for parallelogram \n");
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
		for(j=1;j<=(columns+rows-1);j++)
		{
			if(j==rows-i+1||j==rows+columns-i||(j>rows-i&&j<=rows+columns-i&&(i==1||i==rows)))
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
}