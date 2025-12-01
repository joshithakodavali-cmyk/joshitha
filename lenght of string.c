//program to find length of the string
#include<string.h>
#include<stdio.h>
main()
{
	char mystr[20];
	int i,len=0;
	printf("enter a string");
	gets(mystr);
	for(i=0;mystr[i]!='\0';i++)
	{
		len++;
	}
	printf("the lenght of the string is%d",len);
}
