//program to copy one string into another string
#include<stdio.h>
main()
{
	char S1[20],S2[20];
	int i=0;
	printf("enter string 1");
	gets(S1);
	while(S1[i]!='\0')
	{
		S2[i]=S1[i];
		i++;
	}
	S2[i]='\0';
	printf("the copied string is %s",S2);
}
