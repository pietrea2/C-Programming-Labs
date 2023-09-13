#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>



bool isPalindrome(char *s){
    
    int n = strlen(s);
        
    for(int i = 0; i < n/2 ; i++){
        
        if( s[i] != s[n - i - 1] ){
            return false;
        }
    }
    return true;
}



void removeNonAlphaNumeric_Removespaces(char *string, char *newString){
    
    ///go through s char by char
    //if char is alpha-numeric; add it to the string

}

int main(void) {
    
    //return true if s points to a palindrome
    //"racecar"   -->> check first and last characters if they are the same
    
    char *s1 = "racecar";
    char *s2 = "adam";
    char s[] = "hel lo";
    char *sWithNoSpaces = (char *)malloc((strlen(s) + 1) * sizeof(char));
    
    
    if( isPalindrome(s1)){
        printf("s1 = %s\n", s1);
        printf("s1 is a palindrome!\n\n");
    }
    else {
        printf("s1 = %s\n", s1);
        printf("s1 is not a palindrome\n");
    }
    
    if( isPalindrome(s2)){
        printf("s2 = %s\n", s2);
        printf("s2 is a palindrome!\n");
    }
    else {
        printf("s2 = %s\n", s2);
        printf("s2 is not a palindrome\n");
    }


	return 0;
}
