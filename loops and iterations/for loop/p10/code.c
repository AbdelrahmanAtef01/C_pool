#include "stdio.h"

void main()
{
	int row,column,i;
	printf("please enter number of rows: ");
	scanf("%d",&row);
	printf("please enter number of columns: ");
	scanf("%d",&column);
	for(i=1;i<=row*column;i++)
	{
		if(i%column==1)printf("\n");
		printf("%d ",i);
		if(i<10)printf(" ");
	}
}