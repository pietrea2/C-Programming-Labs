#include <stdio.h>

int main(void) {
	
    //PROBLEM 1
    //code that finds out how many digits are in a number given
    //keep dividing number by 10 (loop this)
    long long n;
    int count = 0;
    
    printf("Enter an interger: ");
    scanf("%lld", &n);
    
    while ( n!= 0) {
        n /= 10;      //n = n/10
        ++count;
    }
    
    printf("Number of digits is: %d\n\n", count);






    //PROBLEM 2
    //code for calculating the factorial of a number given
    int number;
    long long factorial = 1;
    
    printf("Enter an interger: ");
    scanf("%d", &number);
    
    while ( number > 0 ) {
        factorial *= number;      //factorial = factorial * number
        --number;                 //number = numer - 1
    }
    
    printf("Factorial: %11d\n\n", factorial);
    

    
	return 0;
}

