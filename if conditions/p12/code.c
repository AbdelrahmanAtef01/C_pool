#include "stdio.h"

void main()
{
	int units;
	float bill;
	printf("please enter your electricity units: ");
	scanf("%d",&units);
	if(units<=50) bill=units*0.5;
	else if(units<=150) bill=25+0.75*(units-50);
	else if(units<=250) bill=100+1.2*(units-150);
	else bill=220 +1.5*(units-250);
	bill *=1.2;
	printf("electricity bill = %f",bill);
}