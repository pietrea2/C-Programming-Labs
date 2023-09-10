#include <stdio.h>

int main(void) {
    
    //variables for the calculator code
    double firstNumber, secondNumber;
    double sum,         subtraction,  multiplication, division;
    char   calcOperator;
    
    //prompting user for two numbers and a calculation command
	printf("Enter first number: ");
    scanf(" %lf", &firstNumber);
    printf("Enter second number: ");
    scanf(" %lf", &secondNumber);
    printf("Enter calculation command (one of a, s, m, or d): ");
    scanf(" %c", &calcOperator);
    
    //Code will run and complete claculations if appropriate command was given
    if ( calcOperator == 'a' || calcOperator == 's' || calcOperator == 'm' || calcOperator == 'd' ) {
        
        
        //seperate if statements for each different calculation command
        if ( calcOperator == 'a' ) {
            sum = firstNumber + secondNumber;
            printf("Sum of %.2lf and %.2lf is %.2lf", firstNumber, secondNumber, sum);
        }
        
        else if ( calcOperator == 's' ) {
            subtraction = firstNumber - secondNumber;
            printf("Difference of %.2lf from %.2lf is %.2lf", firstNumber, secondNumber, subtraction);
        }
        
        else if ( calcOperator == 'm' ) {
            multiplication = firstNumber * secondNumber;
            printf("Product of %.2lf and %.2lf is %.2lf", firstNumber, secondNumber, multiplication);
        }
        
        else if ( calcOperator == 'd' ) {
           
            //code has to detect whether first number is divided by 0
            if ( secondNumber != 0 ) {
                division = firstNumber / secondNumber;
                printf("Division of %.2lf by %.2lf is %.2lf", firstNumber, secondNumber, division);
            }
            
            else if ( secondNumber == 0 ) {
                printf("Error, trying to divide by zero");
            }
        }
        
    }
    
    //code will print the message below if it didn't recognize the calculation command
    else {
        printf("Error, unknown calculation command given");
    }
    
return 0;
}
