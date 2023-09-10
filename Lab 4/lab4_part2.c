#include <stdio.h>

//written functions
long convertDecimalToBinary ( long decimalNumber );
long convertBinarytoDecimal ( long binaryNumber );

int main(void) {
    
    //variables for printing output of conversion
    long inputNumber;
    char BinaryorDecimal;
    
    printf("Enter B for conversion of Binary to Decimal, OR\n"
           "Enter D for conversion of Decimal to Binary: ");
    scanf(" %c", &BinaryorDecimal);
    
    //end program if the user inputed invalid character
    if (BinaryorDecimal != 'B' && BinaryorDecimal != 'D') {
        printf("Enter your number: Invalid input; Goodbye");
    return 0;
    }
    
    printf("Enter your number: ");
    scanf(" %ld", &inputNumber);
    
    if ( BinaryorDecimal == 'B' ) {
        printf("%ld in binary = %ld in decimal", inputNumber, convertBinarytoDecimal(inputNumber) );
    }
    else if ( BinaryorDecimal == 'D' ) {
        printf("%ld in decimal = %ld in binary", inputNumber, convertDecimalToBinary(inputNumber) );
    }
    
    
return 0;
}

//written conversion function for Decimal to Binary
long convertDecimalToBinary ( long decimalNumber ) {
    
    long binaryNumber = 0;
    long numLeft;
    
    //keep dividing input number by 2, and keep taking the remainder of this division (it will be either 0 or 1)
    //then arrange these digits after each other by multiplying by different powers of 10
    for ( long tensColumn = 1; decimalNumber != 0; tensColumn = tensColumn*10 ) {
        numLeft = decimalNumber % 2;
        decimalNumber = decimalNumber / 2;
        binaryNumber = binaryNumber + ( numLeft * tensColumn );
    }
return binaryNumber;
}

//function that converts a binary number to decimal (base 10)
long convertBinarytoDecimal ( long binaryNumber ) {
    
    long decimalNumber = 0;
    long Remainder;
    
    //takes input and keeps dividing by 10, takes remainder and 
    //multiplies it by increasing powers of 2 (to recreate the binary table)
    //and adds all the numbers together
    for ( long powerOftwo = 1; binaryNumber != 0; powerOftwo = powerOftwo*2 ) {
        Remainder = binaryNumber % 10;
        binaryNumber = binaryNumber / 10;
        decimalNumber = decimalNumber + ( Remainder * powerOftwo );
    }
return decimalNumber;
}