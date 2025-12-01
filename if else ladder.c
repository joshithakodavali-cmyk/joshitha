#include<stdio.h>
main()
{
	int n1,n2;
	printf("enter two numbers");
	scanf("%d%d",&n1,n2);
	if (n1>n2)
	printf("%d is greater than %d",n1,n2);
	else if (n2>n1)
	printf("%d is greater than %d",n2,n1);
	else
	printf("both are equal");
}
