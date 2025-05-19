#include <stdio.h>

int main(void){

    // SIN checker
    int sin, last_digit, product_sum = 0, sum = 0;
    printf("SIN Checker Program------------\n");


    int remainder, resulting_sim, final_sum;
    do{
        printf("\nEnter a 9-digit SIN (we will check if it is valid): ");
        fflush(stdout);
        scanf("%d", &sin);
       
        resulting_sim = sin;
        for(int i = 9; i > 0; i--){
            
            remainder = resulting_sim % (10);
            resulting_sim = resulting_sim / (10);
            
            printf("%d\n", remainder);

            if(i % 2 == 0) product_sum += remainder * 2;
            else if(i == 9) last_digit = remainder;
            else sum += remainder;
        }

        printf("\nLast digit: %d, Product sum: %d, Sum: %d", last_digit, product_sum, sum);
        
        final_sum = product_sum + sum;
        remainder = final_sum % 10;
        printf("\nFinal sum: %d, Last Digit: %d", final_sum, remainder);

        remainder = 10 - remainder;
        if(last_digit == remainder) printf("\nValid SIN! Yay!\n");
        else printf("\nNOT a valid SIN! Ooops!\n");
       

    } while(sin != 999999999 && sin > 100000000 && sin < 1000000000 );
   
    
   





    return 0;

}
