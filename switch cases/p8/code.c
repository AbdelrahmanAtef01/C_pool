#include "stdio.h"
#include "math.h"

void main()
{
	int a,b,c;
	printf("ax2+bx+c=0\nplease enter a ,b and c : ");
	scanf("%d%d%d",&a,&b,&c);
	switch(b)
	{
		case 0:printf("there is no solution");break;
		default :if(a==0) printf("the solution is : %d",(-c/b));break;
	}
	if (a!=0&&b!=0)
	{
	switch((b*b-4*a*c)<0)
	{
		case 0:printf("the roots are : %f, %f",(-b+pow(b*b-4*a*c,0.5)/(2*a)),(-b-pow(b*b-4*a*c,0.5)/(2*a)));break;
		default:printf("there is no solution");break;
	}
	}
}