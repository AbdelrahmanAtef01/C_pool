#include "stdio.h"

typedef struct {int real;int im;} imaginary;

void main()
{
	imaginary m1,m2,sum;
	printf("please enter real and imaginary part :\n");
	scanf("%d",&m1.real);
	scanf("%d",&m1.im);
	printf("please enter real and imaginary part :\n");
	scanf("%d",&m2.real);
	scanf("%d",&m2.im);
	sum.real=m1.real+m2.real;
	sum.im=m1.im+m2.im;
	printf("the sum is %d + %di",sum.real,sum.im);
}