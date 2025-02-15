#include<stdio.h>
void main()
{
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	int x;
	printf("enter num of spaces required:\n");
	scanf("%d",&x);
	space(x,a,b);
	}


void space(int x,int a,int b)
{
	printf("%d",a);
	for(int i=0;i<x;i++)
	{
		printf(" ");
		}
	printf("%d\n",b);
}
