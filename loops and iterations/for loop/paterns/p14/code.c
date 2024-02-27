#include "stdio.h"

void main()
{
	int columns,i,j;
	printf("please enter N: ");
	scanf("%d",&columns);
	for(i=1;i<columns*2;i++)
	{
		for(j=1;j<columns*2;j++)
		{
			if(j==i||j==(columns*2-i))
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
}