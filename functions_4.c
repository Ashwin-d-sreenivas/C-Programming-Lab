#include<stdio.h>

int prime(int x) {
	int i;
	for(i=2;i<x;i++) {
		if(x%i==0) {
			return 0;
		}
	}
	return 1;
}

void main() {
	int x;
	printf("Enter a number: ");
	scanf("%d", &x);
	printf("Output is %d\n", prime(x));
}
