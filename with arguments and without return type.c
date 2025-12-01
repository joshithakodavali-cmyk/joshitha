#include<stdio.h>
void addition(int,int);
main()
{
	int a,b;
	printf("enter a&b values");
	scanf("%d%d",&a,&b);
	addition(11,12);
	addition(13,12);
}
void addition(int p,int q)
{
	int result;
	result=p+q;
	printf("the result is %d",result);
}
