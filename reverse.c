#include<stdio.h>
#include<string.h>

void reverse(char word[50]) {
	char rev[50];
	
	for(int i=strlen(word)-1,j=0;i>=0;i--,j++) {
		rev[j]=word[i];
		}
	printf("the reversed word is %s",rev);
	}

void main() {
	 char word[50];
	 printf("enter a word:");
	 scanf("%s",word);
	 
	 reverse(word);
	 }
	
