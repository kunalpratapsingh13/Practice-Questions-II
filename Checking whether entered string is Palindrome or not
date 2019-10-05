#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char str[50];
	int len,i,flag=0;
	printf("\nENTER A STRING:");
	gets(str);
	len=strlen(str);
	for (i=0;i<len;i++)
	{
	if (str[i]==str[len-i-1])
	flag=flag+1;
	}
	if (flag==len)
	printf("\nTHE STRING IS A PALINDROME");
	else
	printf("\nTHE STRING IS NOT A PALINDROME");
	getch();
}
