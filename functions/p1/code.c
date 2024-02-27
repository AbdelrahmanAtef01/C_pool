#include "stdio.h"

void circle(float radius, float *diameter, float *area, float *circumference)
{
	*diameter = radius*2;
	*area = radius*radius*22/7;
	*circumference = radius*2*22/7;
}

void main()
{
	float radius,diameter,area,circumference;
	printf("please enter the radius: ");
	scanf("%f",&radius);
	circle(radius,&diameter,&area,&circumference);
	printf("the diameter is %f\nthe circumference is %f\nthe area is %f",diameter,circumference,area);
}