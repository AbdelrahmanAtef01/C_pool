#include "stdio.h"

void main()
{
	int num,i=1,j=1;
	do{
	for(i=1;i<=10;i++){
		if(j*i <10)printf(" ");
		printf("%d ",j*i);
	}
	j++;
	printf("\n");
	}while(j<=10);
}