#include "stdio.h"

void main()
{
	int math,phy,chem,sum;
	printf("please enter the degrees of math, physics and chemistry in order : ");
	scanf("%d%d%d",&math,&phy,&chem);
	sum = math+phy+chem;
	if(math>=65&&phy>=55&&chem>=50&&(sum>=180||(phy+chem)>=140)) printf("the candidate is eligible for admission");
	else printf("the candidate isn\'t eligible for admission");
}