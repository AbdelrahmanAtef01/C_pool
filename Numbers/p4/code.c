#include "stdio.h"
#include "math.h"

void main()
{
	char bin[100];
	int binary[100],i,j,num=0;
	printf("please enter binary number :");
	fgets(bin,sizeof(bin),stdin);
	for(i=0;bin[i]!='\n';i++)
	{
		if(bin[i]==48) binary[i]=0;
		else if (bin[i]==49)binary[i]=1;
		else printf("wrong input");
	}
	for(i--,j=0;i>=0;i--,j++)
	{
		if(binary[j]==1)num +=(int)pow(2,i);
	}
	printf("number in decimal is %d",num);
}