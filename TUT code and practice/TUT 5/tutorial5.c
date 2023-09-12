#include <stdio.h>


//PROBLEM 1
void cyclicSwap(int* a, int* b, int* c);

//PROBLEM 2
int* findLarger(int* x, int* y);


int main(void) {
    

    //PROBLEM 1
    //code that swaps the variable values 
    //a = 1        ,        a = 3
    //b = 2        ,        b = 2
    //c = 3        ,        c = 1
    // Pass By Value (local variables, dosent change the value of other local variables)
    // Pass By Reference (use pointers and dereferencing, to change the value of variables forever throughout the code)
    int a, b, c;
    printf("C program that performs cyclic swap on 3 numbers.\n");
    printf("Please enter 3 integers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before cyclic swap: \n");
    printf("%d %d %d\n\n\n", a, b, c);
    
    cyclicSwap(&a, &b, &c);
    printf("Back in main after cyclicSwap(). Final order now: \n");
    printf("%d %d %d\n\n\n", a, b, c);
    




    //PROBLEM 2
    //C program that returns a pointer to the larger of its 2 agruments 
    //larger(x,y)
    int a2, b2;
    printf("C program that returns a pointer to the larger of its 2 agruments.\n");
    printf("Please enter 2 integers: ");
    scanf("%d %d", &a2, &b2);
    
    int largest = *findLarger(&a2, &b2);
    printf("\n\nThe larger number is %d\n\n", largest);

    
    return 0;
}


void cyclicSwap(int* a, int* b, int* c) {
    int temp;
    temp = *b;
    *b = *a;
    *a = *c;
    *c = temp;
    printf("Inside cyclicSwap() function.\nNew order:\n");
    printf("%d %d %d\n\n\n", *a, *b, *c);
    return;
}

int* findLarger(int* x, int* y) {
    if (*x > *y) {
        return x;
    }
    else {
        return y;
    }
}