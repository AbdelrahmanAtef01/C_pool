#include "stdio.h"
#include "math.h"

int fact(int num)
{
	int fact=1,i;
	for(i=1;i<=num;i++)
	{
		fact*=i;
	}
	return fact;
}

float power(int x,int n)
{
	float sum=1,term=0;
    int i;
	for(i=1;i<=n;i++)
	{
		term = pow(x,i)/fact(i);
		sum+=term;
	}
	return sum;
}

void main()
{
	int x,y;
	printf("please enter value of x : ");
	scanf("%d",&x);
	printf("please enter number of terms : ");
	scanf("%d",&y);
	float result = power(x,y);
	printf("the result is %f",result);
}