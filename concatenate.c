#include<stdio.h>
void main()
{
char s1[100],s2[100];
int i,j;
printf("enter string 1 which end with $ symbol:");
scanf("%s",s1);
printf("enter string two which end with $symbol:");
scanf("%s",s2);

for(i=0;s1[i] !='\0';i+=1);
printf("length of s1=%d",i);
for(j=0;s2[j] !='\0';j+=1)
{
	s1[i]=s2[j];
	i+=1;
	}
printf("concatenated string is:%s",s1);
}
