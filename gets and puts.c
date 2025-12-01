//program to read a string using gets and puts format
#include<string.h>
#include<stdio.h>
main()
{
	char name[20];
	printf("enter your name");
	gets(name);
	printf("my name is:\n");
	puts(name);
}
