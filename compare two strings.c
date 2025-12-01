//program to compare two strings
#include<stdio.h>
main()
{
	char S1[20],S2[20];
	int i,flag=0;
	printf("enter string 1");
	gets(S1);
	printf("enter string 2");
	gets(S2);
	for(i=0;S1[i]!='\0'&&S2[i]!='\0';i++)
	{
		if(S1[i]!=S2[i])
		{
			flag=1;
		}
		break;
	}
	if(flag==1)
	printf("strings are not equal");
	else
	printf("strings are equal");
}
