#include "stdio.h"

void main()
{
	int i,j,n;
	printf("please enter N: ");
	scanf("%d",&n);
	for(i=1;i<=2*n-1;i++)
	{
		if(i%2==0)continue;
		for(j=1;j<=n;j++)
		{
			if((j<=i&&i<=n)||(j<=2*n-i&&i>n))
			{
				printf("%d",j);
			}else printf(" ");
		}
		printf("\n");
	}
}