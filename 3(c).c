#include<stdio.h>
#define pi 3.14
main()
{
	float r,area;
	printf("enter the radius");
	scanf("%f",&r);
	area=pi*r*r;
	printf("the area of circle is %0.2f",area);
}
