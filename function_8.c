#include<stdio.h>
#include<string.h>
int find(char array[50],char single) {
	int len;
	len=strlen(array);
	for(int i=0;i<len;i++) {
		if(array[i]==single) {
			return 1;
			}
	}
	return 0;
}

void main() {
	char array[50],single;
	printf("enter a character array:\n");
	gets(array);
	printf("enter the character to be searched:\n");
	scanf("%c",&single);
	
	printf("%d",find(array,single));
	printf("\n");
	}
