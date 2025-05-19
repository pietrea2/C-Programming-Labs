#include <stdio.h>
#include <stdbool.h>

int main(void){

    printf("-----Chapter 4: Repitition-----\n"); 
    printf("1) While loops\n\n");

    int number, sum = 0;
    printf("Please enter positive or negative number: ");
    fflush(stdout);
    scanf("%d", &number);

    while(number != 0){
        sum += number;

        printf("\nPlease enter another number: ");
        fflush(stdout);
        scanf("%d", &number);
    }

    printf("\nTotal sum of your numbers = %d\n", sum);


    printf("\n2) Do-While Loops\n");
    char my_char;
    do{
        printf("\nContinue? y (yes) or n (no): ");
        fflush(stdout);
        scanf(" %c", &my_char);
    } while( my_char == 'n' || my_char != 'y');
    printf("\nYou made it out of the do-while loop!\n");

    printf("\n3)For Loops:\nThey include an initializer, expression, and modifier.\n");
    for(int b = 0; b < 10; b++){
        printf("%d", b);
        if(b < 9)printf(", ");
    }

    int b = 99;
    printf("\nValue of b (initialized again after for loop): %d\n", b);


    // Times table Module
    int table_int;
    printf("\nEnter a positive or negative integer: ");
    fflush(stdout);
    scanf("%d", &table_int);
    printf("\nTimes table for %d-----\n", table_int);
    for(int b = 1; b < 10; b++){
        printf("\n%d x %d = %d", table_int, b, table_int * b);
    }


    printf("\n\nIn For loops, we can have multiple expressions for the 1st and 3rd expression (seperated by a comma like this):\n");
    printf("for(expr1, expr2; expr3; expr4, expr5){}\n");
    printf("\n\nAlso we can remove the body of the for loop completely and put it in the 3rd expression:\n");
    int sum_2;
    int c;
    for(c = 0, sum_2 = 0; c < 10; c++, sum_2 += c){
        printf("%d, %d\n", c, sum_2);
    }


    // Prime function
    int prime_input;
    printf("\nPrime detector-----------------\nEnter a number and we will check if it is prime: ");
    fflush(stdout);
    scanf("%d", &prime_input);
    int i = 2;
    bool prime = true;
    while(i < prime_input && prime){
        if( prime_input % i == 0 ) prime = false;
        i++;
    }
    if (prime) printf("\nThe number is prime! Congrats!\n\n");
    else printf("\nThe number is NOT prime :( That\'s ok!\n\n");

    // Divisor function
    int input_num, d = 1;
    printf("\nDivisor Function--------------\nEnter a positive natural number (integer): ");
    fflush(stdout);
    scanf("%d", &input_num);
    printf("Divisors of %d: ", input_num);
    while(d <= input_num){
        if(input_num % d == 0){
            if(d < input_num) printf("%d, ", d);
            else printf("%d\n\n", d);
        }
        d++;
    }



    return 0;
}
