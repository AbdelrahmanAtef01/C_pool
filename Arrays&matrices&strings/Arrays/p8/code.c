#include "stdio.h"

void main()
{
	int i,baby=0,school=0,adult=0;
	int arr[15];
	printf("please enter the age of 15 persons: ");
	for(i=0;i<15;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]<=5)baby +=1;
		else if(arr[i]<=17) school +=1;
		else adult +=1;
	}
	printf("number of still a baby = ");
	printf("%d",baby);
	printf("\nnumber of attending school = ");
	printf("%d",school);
	printf("\nnumber of adult life = ");
	printf("%d",adult);
}