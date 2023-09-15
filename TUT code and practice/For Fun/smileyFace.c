#include <stdio.h>

int main(void) {
    
    int number1, number2, number3, number4, number5, summm, poop, peep;    /* this is a comment! Oh my!*/
    
    printf("This is how the sentence starts, ok?"
            "\nand this is a new line of code.");
    printf("\nPlease type in 5 numbers:"
           "\n(press space after each number, then press Enter to submit)");
    
    scanf("%d", &number1); scanf("%d", &number2); scanf("%d", &number3);
    scanf("%d", &number4); scanf("%d", &number5);
    
    summm = number1 + number2 + number3 + number4 + number5;
    
    printf("The sum of all the numbers is %d\n"
           "\nType in 0 to make Jeremy happy :)", summm);
    
    scanf("%d", &poop);

    printf("\n\n00000000000000%d000000000000000000"                   /*this is jeremy, say hello*/
           "\n000000000000000000000000000000000"
           "\n000000001111000000000111100000000"
           "\n000000001111000000000111100000000"
           "\n000000000000000000000000000000000"
           "\n000000000000000000000000000000000"
           "\n000000011100000000000000111000000"
           "\n000000011100000000000000111000000"
           "\n000000001110000000000001110000000"
           "\n000000000111000000000011100000000"
           "\n000000000011111111111111000000000"
           "\n000000000000000000000000000000000"
           "\n000000000000000000000000000000000\n\n\n", poop);
           
    printf("Now type in any digit to make Jeremy sad:");
    scanf("%d", &peep);
    
    printf("\n\n000000000000000000000000000000000"                       /*this is jeremy when he*/
           "\n000000000000000000000000000000000"                         /*got back his midterms*/  
           "\n0000000000%d%d%d0000000000%d%d%d0000000"
           "\n0000000000%d%d%d0000000000%d%d%d0000000"
           "\n000000000000000000000000000000000"
           "\n000000000000000000000000000000000"
           "\n0000000000%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d0000000"
           "\n0000000%d%d%d000000000000000%d%d%d00000"
           "\n0000000%d%d%d0000000000000000%d%d%d0000"
           "\n00000%d%d%d0000000000000000000%d%d%d000"
           "\n000000000000000000000000000000000"
           "\n000000000000000000000000000000000\n\n\n", 
           peep, peep, peep, peep, peep, peep, peep, peep, peep,
           peep, peep, peep, peep, peep, peep, peep, peep, peep, 
           peep, peep, peep, peep, peep, peep, peep, peep, peep,
           peep, peep, peep, peep, peep, peep, peep, peep, peep, peep,
           peep, peep, peep, peep, peep, peep, peep, peep, peep, peep);
    return 0;
}