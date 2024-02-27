#include "stdio.h"

int factorial(int n)
{
	while (n>1){
	return n*factorial(--n);
}}

void main()
{
	int n,f;
	printf("please enter a number: ");
	scanf("%d",&n);
	f = factorial(n);
	printf("the factorial is %d",f);
}