#include <stdio.h>


//DECLARING / USING 2-D ARRAYS &
//MEMORY ALLOCATION
//Problem 1: 

//We want to write a program that asks for two matrices and prints
//the sum of these matrices

//maximum size of matrices is 100 x 100

void scanMatrix(int a[][100], int r, int c){
    
    int i, j;
    
    for(i = 0; i < r; i++){
        for(j = 0; j < c; j++){
            
            printf("Enter element at row %d column %d:\n", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    
    
    
    
}

void printMatrix(int a[][100], int m, int n){
    
    int i, j;
    for(i = 0; i < m; i++){
        for(j = 0; j < n; j++){
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    
    //0 - declare the necessary variables 
    int a[100][100], b[100][100], c[100][100];
    int rows, cols;
    
    //1 - ask the user for dimensions of the matrices
    printf("Enter the number of rows:\n");
    scanf("%d", &rows);
    
    printf("Enter the number of columns:\n");
    scanf("%d", &cols);
    
    //printf("%d %d", rows, cols);   ---> testing
    
    int d[rows][cols];
    
    //2 - ask the user for the contents of the matrices 
    scanMatrix(a, rows, cols);
    scanMatrix(b, rows, cols);
    printf("Matrix a is:\n");
    printMatrix(a, rows, cols);
    printf("Matirx b is:\n");
    printMatrix(b, rows, cols);

    
    //3 - calculate the sum of matrices
    for(int i =  0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
    //4 - print the results
    printf("The result of summation is:\n");
    printMatrix(c, rows, cols);
    

	return 0;
}
