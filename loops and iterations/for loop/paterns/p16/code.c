#include "stdio.h"

void main()
{
	int n,i,j;
	printf("please enter size: ");
	scanf("%d",&n);
	if(n%2==1)n++;
	for(i=2;i<=n/2;i++)
	{
		for(j=1;j<=n*2+1;j++)
		{
			if(j==n+1) continue;
			else if((j<=n/2+i-1&&j>=n/2-i+1)||(j<=n*3/2+i&&j>=n*3/2-i+2))
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n*2;j++)
		{
			if(j==n+1) continue;
			else if(j<=n*2-i+1&&j>=i)
			{
				printf("*");
			}else printf(" ");
		}
		printf("\n");
	}
}