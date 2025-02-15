#include<stdio.h>
#include<math.h>

int factorial(int n){
	if(n==1) {
		return n;
	}
	else{
		return n*factorial(n-1);}
	}


void main(){
	int n,fact=1;
	printf("enter the number whose factorial is to be calculated:\n");
	scanf("%d",&n);
	for(int i=2;i<=n;i++) {
		fact=fact*i;
		}
	
	printf("factorial using non recurssisve functions =%d\n",fact);
	
	printf("factorial with recursive functions =%d\n",factorial(n));
	}
	
