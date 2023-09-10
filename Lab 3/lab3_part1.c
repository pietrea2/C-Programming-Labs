#include <stdio.h>
#include <stdbool.h>

int main(void) {
    
    //variables describing set of different coins
    int money, quarters, dimes, nickels, pennies;
	
    //the coin code will continue to run until an invalid amount is inputed by user
    while (true) {
        
        //initial message that prompts user for amount of cents
        printf("Please give an amount in cents less than 100: ");
		scanf(" %d", &money);
        
        //the code will stop running (prompting user) (break the while loop)
        if (money <1 || money > 99){
            printf("Goodbye.\n");
            return 0;
        }
		
        //coin calculations will begin if the amount of cents is between 1 and 99
		if (money >=1 || money <= 99){
            
            if (money == 1) {
                printf("%d cent: ", money);
            }
            else {
                printf("%d cents: ", money);
            }
            
            //first begins dividing by 25 to calculate max amount of quarters
            if (money >= 25 && money <= 99) {
                quarters = money / 25;
                money = money % 25;
                
                //grammatical considerations for singular or plural form of "quarter"
                if ( quarters > 1) {
                    printf("%d quarters", quarters); }
                else if ( quarters == 1) {
                    printf("%d quarter", quarters); }
                
                if ( money > 0) {
                    printf(", "); }
                else if ( money == 0) {
                    printf(".\n"); }
            }
            
            //calculating max amount of dimes
            if ( money >= 10 && money < 25) {
                dimes = money / 10;
                money = money % 10; 
                
                if ( dimes > 1) {
                    printf("%d dimes", dimes); }
                else if ( dimes == 1) {
                    printf("%d dime", dimes); }
                
                if (money > 0) {
                    printf(", "); }
                else if (money == 0) {
                    printf(".\n"); }
            }
        
            //calculating max amount of nickels
            if (money >= 5 && money < 10) {
                nickels = money / 5;
                money = money % 5;
            
                if ( nickels > 1 ) {
                    printf("%d nickels", nickels); }
                else if ( nickels == 1) {
                    printf("%d nickel", nickels); }
                
                if (money > 0) {
                    printf(", "); }
                else if (money == 0) {
                    printf(".\n"); }
            }
            
            //any money amount between 1 and 4 will be printed as "cents"  or "pennies"
            pennies = money;
            if ( pennies > 1 && money <5) {
                printf("%d cents.\n", pennies); }
            else if ( pennies == 1) {
                printf("%d cent.\n", pennies); }
        }
    }
}