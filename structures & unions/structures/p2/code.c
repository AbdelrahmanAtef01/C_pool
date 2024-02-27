#include "stdio.h"

typedef struct {int hours;int minutes;int seconds;} time;

void main()
{
	time m1,m2,dif;
	printf("please enter start time :\n");
	printf("Enter hours, minutes & seconds : ");
	scanf("%d",&m1.hours);
	scanf("%d",&m1.minutes);
	scanf("%d",&m1.seconds);
	printf("please enter end time :\n");
	printf("Enter hours, minutes & seconds : ");
	scanf("%d",&m2.hours);
	scanf("%d",&m2.minutes);
	scanf("%d",&m2.seconds);
	if(m2.seconds>m1.seconds)dif.seconds = m2.seconds - m1.seconds;
	else {dif.seconds = 60 -m1.seconds+m2.seconds;m2.minutes--;}
	if(m2.minutes>m1.minutes)dif.minutes=m2.minutes-m1.minutes;
	else {dif.minutes = 60-m1.minutes +m2.minutes;m2.hours--;}
	if(m2.hours>=m1.hours)dif.hours=m2.hours-m1.hours;
	else printf("can't be calculated");
	printf("the difference is %d : %d : %d",dif.hours,dif.minutes,dif.seconds);
}