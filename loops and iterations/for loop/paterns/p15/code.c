#include "stdio.h"

void main()
{
	int columns,i,j;
	printf("please enter size: ");
	scanf("%d",&columns);
	for(i=1;i<columns*2;i++)
	{
		for(j=1;j<=columns;j++)
		{
			if(((i==1||i==columns||i==columns*2-1)&&j!=1&&j!=columns)||((j==1||j==columns)&&i!=1&&i!=columns&&i!=columns*2-1))
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
}