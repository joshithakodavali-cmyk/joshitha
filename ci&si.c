#include<stdio.h>
#include<math.h>
main()
{
	float p,t,r,si,ci;
	printf("enter principle amount");
	scanf("%f",&p);
	printf("enter time");
	scanf("%f",&t);
	printf("enter rate of intrest");
	scanf("%f",&r);
	si=p*t*r/100;
	ci=p*pow(1+r/100,t)-p;
	printf("\n the simple interest = %0.2f",si);
	printf("\n the compound interest = %0.1f",ci);
}
