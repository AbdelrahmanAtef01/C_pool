#include "stdio.h"

void main()
{
	int columns,i,j;
	printf("please enter number of columns: ");
	scanf("%d",&columns);
	if(columns%2==0)columns /=2;
	else columns = columns/2+1;
	for(i=1;i<=columns*2-1;i++)
	{
		for(j=1;j<=columns*2;j++)
		{
			if((j>columns-i&&j<columns+i&&i<=columns)||(j>i-columns&&j<columns*3-i&&i>columns))
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
}