#include "stdio.h"

typedef struct {float price;int quantity;char name;} item;

void main()
{
	item t1={50,12,'A'};
	int q=0;
	float pr=0.0;
	printf("please enter increment values :\n");
	printf("please enter price increment : ");
	scanf("%f",&pr);
	printf("please enter quantity increment: ");
	scanf("%d",&q);
	t1.price +=pr;t1.quantity +=q;
	printf(" name : %c\nquantity : %d\nprice : %f\n\ntotal value of item = %f",t1.name,t1.quantity,t1.price,t1.quantity*t1.price);
}