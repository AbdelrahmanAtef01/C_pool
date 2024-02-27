#include "stdio.h"

void main()
{
	int n,columns,i,j;
	printf("press 1 for half diamond or 2 for mirrored half diamond \n");
	scanf("%d",&n);
	if (n==1||n==2){
		printf("please enter number of coolumns: ");
		scanf("%d",&columns);
	}else{
		printf("wrong number");
	}
	if(n==1){
	for(i=1;i<=columns*2-1;i++)
	{
		for(j=1;j<=columns;j++)
		{
			if((j<=i&&i<=columns)||(j<=columns*2-i&&i>columns))
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
	}
	else if(n==2){
	for(i=1;i<=columns*2-1;i++)
	{
		for(j=1;j<=columns;j++)
		{
			if((j>columns-i&&i<=columns)||(j>i-columns&&i>columns))
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
	}
}