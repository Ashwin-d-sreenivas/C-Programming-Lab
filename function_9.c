#include<stdio.h>
#include<string.h>

void locate(char s1[100],char s2[50],int m) {
	int i;
	for(i=0,m;i<strlen(s2);i++,m++) {
		s1[m]=s2[i];
		}
	}
void main() {
	char s1[100],s2[50];
	printf("enter string 1\n");
	gets(s1);
	printf("enter string 2\n");
	gets(s2);
	int m;
	printf("enter the position from which the second string is to be joined :");
	scanf("%d",&m);
	
	locate(s1,s2,m);
	printf("the new joined string is %s\n",s1);
	}
	
