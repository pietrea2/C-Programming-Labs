#include <stdio.h>

int reverseDigits(int value);

int main(void) {
    
    int number;
    
    printf("Enter a number: ");
    scanf("%d", &number);
    
    printf("Your number reversed is: %d\n", reverseDigits(number));
    
	return 0;
}


int reverseDigits (int value) {
    
    int value1 = value;
    int tens0 = 1;
    
    while (value1 != 0) {
        
        value1 = value1 / 10;
        tens0 = tens0 * 10;
    }

    int newValue = 0;
    int remainder1;
    
    for (int tens = tens0/10; value > 0; tens = tens/10) {
     
        remainder1 = value % 10;
        value = value / 10;
        newValue = newValue + (remainder1 * tens);
    }
    
return newValue;
}