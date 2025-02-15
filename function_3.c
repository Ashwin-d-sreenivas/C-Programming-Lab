#include<stdio.h>

void fib(int n) {
	int x=1,y=1,z;
	printf("%d\n",x);
	printf("%d\n",y);
	for(int i=2;i<n;i++) {
		z=x+y;
		x=y;
		y=z;
		printf("%d\n",z);}
	}

void main() {
	printf("enter the number of numbers you want in the sequence:");
	int n;
	scanf("%d",&n);
	fib(n);
	}
	
