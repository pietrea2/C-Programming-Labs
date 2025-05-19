#include <stdio.h>

// change variable to negative if it is positive
//  if negative, leave as is
void negAbs(int *a);

int main(void){

    int number = 10, second_number = -22;
    
    printf("\nInitial variables:\n%d %d\n", number, second_number);

    negAbs(&number);
    negAbs(&second_number);

    printf("\nVariables after negAbs():\n%d %d\n\n", number, second_number);



    return 0;
}

void negAbs(int *a){

    if(*a > 0) *a = -*a;

}

