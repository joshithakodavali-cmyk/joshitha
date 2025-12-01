//program to concatenate two strings
#include<stdio.h>
main()
{
	char S1[20],S2[20];
	int i,j,len=0;
	printf("enter string 1");
	gets(S1);
	printf("enter string 2");
	gets(S2);
	for(i=0;S1[i]!='\0';i++)
	{
		len=len+1;
	}
	for(j=0;S2[j]!='\0';j++,len++)
	{
		S1[len]=S2[j];
	}
	S1[len]='\0';
	printf("the concatenated string is %s",S1);
}
