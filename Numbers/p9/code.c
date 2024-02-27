#include "stdio.h"

float m_x(int m,int x)
{
	if(x!=0)return (float)(m-x+1)/x*m_x(m,--x);
	else return 1.0;
}

void main()
{
	int m,x,i,k;
	printf("please enter m & x :");
	scanf("%d%d",&m,&x);
	printf(" m x");
	for(i=0;i<=x;i++){printf("    %d",i);}
	printf("\n");
	k=i*5+4;
	for(i = 0;i<=k;i++){printf("-");}
	printf("\n");
	for(i=0;i<=m;i++)
	{
		printf(" %d  ",i);
		for(int j=0;j<=x;j++)
		{
			if(j<=i){
			int f = (int)m_x(i,j);
			if(f<10)printf("    %d",f);
			else if(f<100)printf("   %d",f);
			else if(f<1000)printf("  %d",f);}
		}
		printf("\n");
	}
	for(i=0;i<=k;i++){printf("-");}
}