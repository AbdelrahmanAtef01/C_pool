#include "stdio.h"

void main()
{
	int columns,i,j;
	printf("please enter number of columns: ");
	scanf("%d",&columns);
	/*if(columns%2==0)columns /=2;
	else*/ columns = columns/2+1;
	for(i=1;i<=columns*2-1;i++)
	{
		for(j=1;j<=columns*2-1;j++)
		{
			if(i==columns||j==columns)
			{
				continue;
			}else if ((j>columns-i&&j<columns+i&&i<columns&&i!=1&&j!=1&&j!=columns*2-1)||(j>i-columns&&j<columns*3-i&&i>columns&&i!=columns*2-1)){
				printf(" ");
			}else printf("*");
		}
		if(i !=columns)printf("\n");
	}
}