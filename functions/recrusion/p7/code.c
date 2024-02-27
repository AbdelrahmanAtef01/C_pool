#include "stdio.h"

int i=0,k=1;

int floyd(int num)
{
	for(int j=0;j<i;j++)
	{
		printf("%d ",k++);
	}
	printf("\n");
	i++;
	if(i<=num)return floyd(num);
	else return 0;
}

void main()
{
	int num,res;
	printf("please enter a number: ");
	scanf("%d",&num);
	res = floyd(num);

}