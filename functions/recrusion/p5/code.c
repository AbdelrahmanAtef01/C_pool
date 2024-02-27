#include "stdio.h"

int term_1=0,term_2=1,term,i=3;

int fibo(int n)
{
	
	term = term_1+term_2;
	term_1=term_2;
	term_2=term;
	i++;
	if(i == n+1)return term;
	else if (n==1)return 0;
	else if (n==2)return 1;
	else return fibo(n);
}

void main()
{
	int num,res;
	printf("please enter a number: ");
	scanf("%d",&num);
	res = fibo(num);
	printf("the fibonacci term of n is: %d",res);
}