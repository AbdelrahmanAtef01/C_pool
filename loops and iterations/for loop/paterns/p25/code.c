#include "stdio.h"

void main()
{
	int i,j,k,n;
	printf("please enter N: ");
	scanf("%d",&n);
	for(i=1;i<=2*n+1;i++)
	{
		k=0;
		if(i%2==1&&i!=1&&i!=2*n+1)continue;
		for(j=1;j<=n+2;j++)
		{
			if((j<=i&&i<=n+1&&j>1)||(j<=2*n-i+2&&i>n+1&&j>1))
			{
				if((j-1>i/2&&i<=n+1)||(j-1>(2*n-i)/2+1&&i>n+1))k--;else k++;
				printf("%d",k);
			}else if(j==1||(j==i+1&&i<=n+1&&i>1)||(j==2*n-i+3&&i>n+1&&i<2*n+1))printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}