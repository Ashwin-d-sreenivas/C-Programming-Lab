#include<stdio.h>
#include<string.h>
void main()
{
char str[100];
int i,len,flag;
flag=0;
printf("enter a string");
gets(str)
len=strlen(str);
for(i=0;i<len;i++)
{if(str[i]!=str[len-i-1])
{flag=1;
printf("%c\n", str[i]);
break;}
}
if(flag==0)
	{printf("string is palindrome");
	}
else{
	printf("string not a palindrome");}
}
