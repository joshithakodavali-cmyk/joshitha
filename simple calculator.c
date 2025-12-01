//simple calculator
#include<stdio.h>
main()
{
	int n1,n2;
	char op;
	printf("enter two numbers");
	scanf("%d%d",&n1,&n2);
	printf("enter the opertors(+,-,*,/,%)");
	scanf("\n");
	scanf("%c",&op);
	switch(op)
	{
		case'+':
			printf("the sum is %d",n1+n2);
			break;
			case'-':
				printf("the difference is %d",n1-n2);
				break;
				case'*':
					printf("the product is %d",n1*n2);
					break;
					case'/':
						printf("the quotient is %d",n1/n2);
						break;
						case'%':
							printf("the remainder is %d",n1%n2);
							break;
							default:printf("invalid operator");
	}
}
