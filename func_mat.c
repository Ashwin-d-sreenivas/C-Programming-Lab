#include<stdio.h>

void read(int rows,int cols,int mat[][]) {
	
	int i=0,j=0;
	
	for(i=0;i<rows;i++) {
		for(j=0;j<cols;j++) {
			printf("position %d%d=");
			scanf("%d",&mat[i][j]);
			}
		}
	
	
void add() {
	
	int rows,cols;
	printf("enter the number of rows:);
	scanf("%d",&rows);
	printf("enter number of coloumns");
	scanf("%d",&cols);
	
	int mata[rows][cols],matb[rows][cols];
	
	read(mata,matb);
	int i,j;
	int sum[rows][cols];
	for (i = 0; i < rows; ++i) {
        	for (j = 0; j < cols; ++j) {
           	 sum[i][j] = mata[i][j] + matb[i][j];
        }
    }
    	printf("Sum of the matrices:\n");
    	for (i = 0; i < rows; ++i) {
        	for (j = 0; j < cols; ++j) {
            	printf("%d\t", sum[i][j]);
        }	
        	printf("\n");
    }
    }
   
   
void multi() {
	int rows1,rows2,cols1,cols2;
	printf("Enter the number of rows of the first matrix: ");
	scanf("%d", &rows1);
	printf("Enter the number of columns of the first matrix: ");
  	scanf("%d", &cols1);
	int mata[rows1][cols1];

    	

	 printf("Enter the number of rows of the second matrix: ");
	 scanf("%d", &rows2);
	 printf("Enter the number of columns of the second matrix: ");
	 scanf("%d", &cols2);  
	 
	 if(cols1!=rows2) {
	 	printf("invalid");
	 	break;}
	 
	 read(mata);
	 read(matb);
	 
	 int product[rows1][cols2];
	 int i,j,k;
	 
	 for (i = 0; i < rows1; ++i) {
         for (j = 0; j < cols2; ++j) {
            for (k = 0; k < cols1; ++k) {
                product[i][j] += mata[i][k] * matb[k][j];
            }
        }
    }

   	printf("Product of the matrices:\n");
    	for (i = 0; i < rows1; ++i) {
        	for (j = 0; j < cols2; ++j) {
            		printf("%d\t", product[i][j]);
       	 }
       	 printf("\n");
    	}
}
	 
void transpose() {

	int rows,cols;
	
	printf("Enter the number of rows of the matrix: ");
    	scanf("%d", &rows);
    	printf("Enter the number of columns of  matrix: ");
    	scanf("%d", &cols);
    	int mata[rows][cols];
	
	read(mata);
	int i,j;
	int transpose[rows][cols];
	for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
                transpose[i][j] = mata[j][i];
            
        }
    }
	printf("Transpose of the matrix:\n");
    	for (i = 0; i < n; i++) {
        	for (j = 0; j < m; j++) {
            		printf("%d\t", transpose[i][j]);
        }
        	printf("\n");
    }
}

void display() {

	int rows,cols;
	printf("Enter the number of rows of the matrix: ");
    	scanf("%d", &rows);
    	printf("Enter the number of columns of  matrix: ");
    	scanf("%d", &cols);
    	int mata[rows][cols];
    	read(mata);
    	int i,j;
    	for(i=0;i<rows;i++) {
    		for(j=0;j<cols;j++) {
    			printf("%d\t",mata[i][j]);
    			}
    		printf("\n");
    		}
    	}
    	
   void main() {
   	int ch;
   	printf("enter choice \n 1.add \n 2.multiply\n 3transpose\n 4 display\n");
   	scanf("%d",&ch);
   	switch(ch){
   		case 1:
   			add();
   		case 2:
   			multi();
   		case 3:
   			transpose();
   		case 4:
   			display();
   		default:
   			break;
   			}
   	}
	 
