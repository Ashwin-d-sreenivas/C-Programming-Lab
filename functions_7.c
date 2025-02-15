#include<stdio.h>
void largest(int m,int n,int mat[m][n]){
	int largest;
	largest=mat[0][0];
	int i,j;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			if(mat[i][j]>largest) {
				largest=mat[i][j];}
		}
	}
	printf("the largest element is %d at a%d%d",largest,i,j);
	}


void main(){
	int m,n;
	printf("number of rows=\n");
	scanf("%d",&m);
	printf("number of coloumns=\n");
	scanf("%d",&n);
	int mat[m][n];
	int i,j;
	for(i=0;i<m;i++) {
		for(j=0;j<n;j++) {
			printf("a%d%d=\n",i+1,j+1);
			scanf("%d",&mat[i][j]); }
		}
	largest(m,n,mat);
	}
