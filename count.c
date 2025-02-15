#include<stdio.h>
#include<string.h>
void main() {
	int i,vowels=0,consonants=0,spaces=0;
	char str[100];
	printf("Enter a string which ends with $symbol\n");
	gets(str);
	for(i=0;str[i]!='$';i++) {
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U') {
			vowels++;
		} else if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')) {
			consonants+=1;
		} else {
			spaces+=1;
		}
	}
	printf("num of vowels=%d\n",vowels);
	printf("num of consonants=%d\n",consonants);
	printf("num of spaces=%d\n",spaces);
}
	
