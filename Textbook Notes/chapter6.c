#include <stdio.h>

double arraySumDouble(double array[], int array_length);
int arraySumInt(int array[], int array_length);
void read_and_fill_array(int array[], int size);
void read_and_fill_array_2(int *array, int size);



int main(void){

    printf("\nChapter 6: Arrays\n\n");
    printf("Can declare an array with/without indicating the size\n\n");

    int array[] = {1, 2, 3, 4, 5};
    int array_2[10] = {1, 2, 3, 4, 5};
    int array_3[5] = {0};

    for(int i = 0; i < 5; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
    for(int i = 0; i < 10; i++){
        printf("%d ", array_2[i]);
    }
    printf("\n");
    for(int i = 0; i < 5; i++){
        printf("%d ", array_3[i]);
    }

    printf("\n\nSince C99, we can declare the size of an array using a variable (not just constant)\n");

    printf("An array identifier is the address of the first element of the array\n");
    printf("For ex: int x[10] --> x = &x[0]\n");
    printf("In functions, we usually give the array start address as a parameter (don't need to specify size! Just address!)\n");
    printf("\t double f (int list[]) --> result = f(x) (where x = &x[0])\n\n");

    int a[] = {3, 5, 7, 9};
    double b[] = {23.1, 2.1, 4.1};
    int a_sum = arraySumInt(a, 4);
    double b_sum = arraySumDouble(b, 3);
    printf("Sum of array a: ");
    for(int i = 0; i < 4; i++){
        printf("%d ", a[i]);
    }
    printf(" -> %d\n", a_sum);
    printf("Sum of array b: ");
    for(int i = 0; i < 3; i++){
        printf("%.1lf ", b[i]);
    }
    printf(" -> %.1lf\n\n", b_sum);

    printf("Pointer Arithmetic:\n\t- Given int x[], x+2 -> x[2] and *(x+2) is the contents of x[2]\n\n");

    int c[] = {}, d[] = {};
    printf("\nEnter 4 integers to the array (seperated by spaces): ");
    read_and_fill_array(c, 4);
    for(int i = 0; i < 4; i++){
        printf("%d ", c[i]);
    }
    printf(", Sum = %d\n", arraySumInt(c, 4));
    
    printf("\nEnter 4 integers again to the array (seperated by spaces): ");
    read_and_fill_array(d, 4);
    for(int i = 0; i < 4; i++){
        printf("%d ", d[i]);
    }
    printf(", Sum = %d\n", arraySumInt(d, 4));


    printf("\n---Multi-Dimensional Arrays---\n");
    printf("a[row][col]\n");
    printf("\t- this storage arrangement is called \"row major order\"\n");
    printf("\nAlso, we have to specify the columns when defining a function parameter that is a 2-d array\n\t- Ex: int function(int array[][3])\n\n");
    printf("We can also pass sub-arrays to functions\n\t-For Ex: pass 1 row from 2-d array\n\tdouble array[rows][cols]\n\tsum(array[1], 3)\n\n");






    return 0;

}

double arraySumDouble(double array[], int array_length){

    double sum = 0.0;
    for(int i = 0; i < array_length; i++){
        sum += array[i];
    }
    return sum;

}

int arraySumInt(int array[], int array_length){

    int sum = 0;
    for(int i = 0; i < array_length; i++){
        sum += array[i];
    }
    return sum;

}

void read_and_fill_array(int array[], int size){

    for(int i = 0; i < size; i++){
        scanf("%d", &array[i]);
    }
}

void read_and_fill_array_2(int *array, int size){

    for(int i = 0; i < size; i++){
        scanf("%d", array+i);
    }
}

