#include "stdio.h"

void main()
{
	int customer_no,no_of_units;
	float charge;
	printf("please enter customer number and number of units: ");
	scanf("%d%d",&customer_no,&no_of_units);
	if(no_of_units<200)charge = 0.5*no_of_units;
	else if(no_of_units<400)charge = 100+0.65*(no_of_units-200);
	else if(no_of_units<600)charge = 230 + 0.8*(no_of_units-400);
	else charge = 390+no_of_units-600.0;
	printf("customer number : %d\ncharge = %f",customer_no,charge);
}