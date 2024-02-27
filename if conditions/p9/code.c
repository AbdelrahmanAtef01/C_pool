#include "stdio.h"

void main()
{
	int angle_1,angle_2,angle_3;
	printf("please enter 3 angles: ");
	scanf("%d%d%d",&angle_1,&angle_2,&angle_3);
	if(angle_1==angle_2==angle_3)printf("equilateral triangle");
	else if(angle_1==angle_2||angle_1==angle_3||angle_2==angle_3) printf("isosceles triangle");
	else printf("scalene triangle");
}