#include <stdio.h> 
#include <math.h>

int main(void) {
    
    double number1, number2, number3, mean, standardDev;
   
    printf("Enter three numbers: ");
    scanf("%lf%lf%lf", &number1, &number2, &number3); 
    
    mean = (number1 + number2 + number3) / 3;
    standardDev = sqrt( (pow(number1 - mean, 2) + pow(number2 - mean, 2) + pow(number3 - mean, 2) ) / (3 -1) );
    
    printf("The mean is %.2lf and the standard deviation is %.2lf", mean, standardDev);
    
    return 0;
}

