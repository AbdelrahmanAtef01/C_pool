#include "stdio.h"

typedef struct {int feet;int inch;} measure;

void main()
{
	measure m1,m2,sum;
	printf("please enter first distance :\n");
	printf("please enter feet : ");
	scanf("%d",&m1.feet);
	printf("please enter inch: ");
	scanf("%d",&m1.inch);
	printf("please enter second distance:\n");
	printf("please enter feet : ");
	scanf("%d",&m2.feet);
	printf("please enter inch : ");
	scanf("%d",&m2.inch);
	sum.feet=m1.feet+m2.feet+(m1.inch+m2.inch)/12;
	sum.inch=m1.inch+m2.inch-(m1.inch+m2.inch)/12*12;
	printf("the sum is %d feet,%d inch",sum.feet,sum.inch);
}