//Write a program that finds the maximum in a dynamically allocated array

//malloc  --> include <stdlib.h>    ---> malloc(n*sizeof(int))   --->creates empty space
//calloc  --> include <stdlib.h>    ---> calloc(n*sizeof(int))   --->fills empty spaces with 0

//reserves memory, and you HAVE TO FREE IT
//inlcude    free( )


#include <stdlib.h>
#include <stdio.h>

double a[100];


double* createArray(int n){
    
    
    //*a = (double) malloc( 100 * sizeof(double));
    //a = malloc( n * sizeof(double *) );
    
    return a;
}


int main(int argc, char **argv)
{
    
    //1 - ask the user for dimensions
    int n;
    printf("enter length of array:\n");
    scanf("%d", &n);
    
    //2 - create array and fill it with data
    double *array;
    array = (double *) calloc( 100, sizeof(double));

    //array = createArray(n);
    
    if(array == NULL){
        //memory allocaiton was unsuccessful
        printf("Dynamic memory allocation failed! quitting!");
        exit(0);
    }
    
    
    for(int i = 0; i <n; i++){
        printf("%lf ", array[i]);
    }
    printf("\n");
    
    free(array);
    
    
    
    //3 - find maximum in that array
    
    
    
    
	
	return 0;
}


//ALLOCATING MEMORY FOR 2-D ARRAY


// M x N matirx

//*a1
//*a2
//*a3   ---> pointers to each row of matrix

//anything * ---> array of anythings

//  a = ( double **   ) M * sizeof(double*)  --> array of double pointers   
//        for(int i = 0; i < M' i++)
    //          a[i] = (double*)malloc(N*sizeof(double));    ---> you have M + 1 pointers in total
