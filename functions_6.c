#include<stdio.h>

void read(int *x, int *y) {
	printf("enter two numbers: ");
	scanf("%d%d",x,y);
}

int calculate(int x,int y) {
	int ch,result;
	printf("enter choice for calculation----\n 1 for sum\n 2 for sub\n 3 for product\n 4 for division\n");
	scanf("%d",&ch);
	switch(ch) {
		case 1: result = x+y; break;
		case 2: result = x-y; break;
		case 3: result = x*y; break;
		case 4: result = x/y; break;
	}
	return result;
}


void display(int result) {
	printf("%d",result);
}

void main() {
	int x, y;
	read(&x,&y);
	int result = calculate(x,y);
	display(result);
}
