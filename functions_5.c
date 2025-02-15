#include<stdio.h>
#include<string.h>
void main()
{
	char str[100];
	printf("enter a string");
	gets(str);
	low_to_up(str);
}
void low_to_up(char str[100])
{
	int i=0;
	for(i=0;str[i]!='\0';i+=1)
	{
		if(str[i]>='a' && str[i]<='z')
		{
			str[i]=toupper(str[i]);
			}
	}
	printf("string in uppercase is:%s",str);
	}
