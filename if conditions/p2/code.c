#include "stdio.h"
#include "math.h"

void main()
{
	int a,b,c;
	printf("ax2+bx+c=0\nplease enter a ,b and c : ");
	scanf("%d%d%d",&a,&b,&c);
	if (a==0&&b==0)printf("there is no solution");
	else if(a == 0)printf("the solution is : %d",(-c/b));
	else if((b*b-4*a*c)<0)printf("there is no solution");
	else printf("the roots are : %f, %f",(-b+pow(b*b-4*a*c,0.5)/(2*a)),(-b-pow(b*b-4*a*c,0.5)/(2*a)));
}