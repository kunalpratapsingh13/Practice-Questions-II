#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[50];
	int len,i;
	printf("\nENTER A STRING:");
	gets(str);
	len=strlen(str);
	printf("\nTHE LENGTH OF THE STRING IS:%d",len);
	getch();
}
