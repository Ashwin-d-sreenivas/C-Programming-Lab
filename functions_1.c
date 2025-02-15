#include<stdio.h>

void main()
{int x,y;
printf("enter numbers:\n");
scanf("%d%d",&x,&y);
	exchange(x,y);
	}
void exchange(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("x is now:%d\n y is now %d",a,b);
	}
	
