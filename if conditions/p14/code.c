#include "stdio.h"
#include "math.h"

void main()
{
	int v,t;
	float result;
	printf("please enter wind speed in mph : ");
	scanf("%d",&v);
	printf("please enter temperature in fahrenhiet : ");
	scanf("%d",&t);
	if(v>=0&&v<=4) result = t;
	else if(v>=45) result = 1.6*t-55;
	else result = 91.4+(91.4-t)*(0.0203*v-0.304*pow(v,0.5)-0.474);
	printf("wind chill index = %f",result);
}