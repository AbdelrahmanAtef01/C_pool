#include "stdio.h"

void main()
{
	int columns,i,j;
	printf("please enter number of columns: ");
	scanf("%d",&columns);
	for(i=0;i<columns*2-1;i++)
	{
		for(j=1;j<=columns*2-1;j++)
		{
			if((j>i*2&&j<=columns+i&&i<columns)||(j>=(columns+(columns-i+1)*2)&&j<(columns*2-(i+1-columns))&&i>=columns))
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
}