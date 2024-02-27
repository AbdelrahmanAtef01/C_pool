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
			if((j>=columns-i&&j<(columns-i)*2&&i<columns)||(j> i-columns+1&&j<=(columns+(i-columns-1)*2)&&i>=columns))
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
}