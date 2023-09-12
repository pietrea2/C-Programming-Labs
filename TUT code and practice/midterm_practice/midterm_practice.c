#include <stdio.h>
#include <stdbool.h>


int main(void) {
	

    //Midterm 2014 Q2
    double averageSpeed = 40;
    double distance = ( averageSpeed * (double) 60 / (double) 1000 ) * 30;
    
    printf("If your speed is %.2lf (m/s), you will travel %.2lf (km) in 30 minutes.\n", averageSpeed, distance);
	
    
    
    
    
    //Midterm 2014 Q4
    bool red = true;
    bool green = true;
    bool blue = false;
    bool yellow;
        
    if ( red && green && !blue ) {
        yellow = true;
    }
    
    printf("%d", yellow);





    //Midterm 2014 Q5
    int numApples = 11;
    int packing = 3;
    int leftover;
    
    if (packing == 3) {
        leftover = numApples % 3;
    }
    else if (packing == 5) {
        leftover = numApples % 5;
    }
    
    printf("Leftover when packing %d apples in packages of %d apples: %d\n", numApples, packing, leftover);





    //Midterm 2014 Q7
    char firstChar = 'A';
    char secondChar = 'U';
    
    printf("%c", firstChar + 3);
    firstChar += 4;
    printf("%c", firstChar);
    printf("%c", firstChar -3);
    printf("%c", secondChar);
    firstChar++;
    firstChar++;
    printf("%c\n", firstChar);





    //Midterm 2014 Q8
    int i, j, k;
    
    for ( i = 10 ; i <= 14 ; i = i + 2 ) {
        
        for ( j = 5 ; j > 0 ; j-- ) {
            
            k = i + j;
            printf("%d ", k);
        }
    }





    //Midterm 2014 Q10
    char input;
    printf("Enter a character: ");
    scanf("%c", &input);
    
    if ( input >= 65 && input <= 90) {
        printf("UPPER CASE.");
    }
    else if ( input >=97 && input <= 122) {
        printf("LOWER CASE.");
    }
    else if ( input >= 48 && input <= 57) {
        printf("DIGIT.");
    }
    else {
        printf("SPECIAL.");
    }
    
    printf("%d", sizeof(input));
    printf("\n\n");

    
    return 0;
}