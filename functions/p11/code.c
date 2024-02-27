#include "stdio.h"
#include "math.h"

float powe(int n, int p)
{
	float res = pow(n,p);
	return res;
}

void main()
{
	int n,p;
	float res_1,res_2;
	printf("please enter the number: ");
	scanf("%d",&n);
	printf("please enter the power: ");
	scanf("%d",&p);
	res_1 = powe(n,p);
	res_2 = powe(n,-p);
	printf("%f\n%f",res_1,res_2);
}