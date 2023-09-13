#include <stdio.h>
#include <string.h>
#include <stdbool.h>

////PALINDROME
//ex: "racecar"

//Make a function that finds out if the string is a palindrome
//bool isPalindrome(char *s){
    //return isPalHelper(s);
//}

//BASE CASE: if the string is 1 character, it is palindrome
//          : if the string is 2 characters                  ---> these will be 2 if statements


//SOMETIMES WRITE HELPER FUNCTIONS :)
// bool isPalHelper(char * s, int start, int end){
    


bool isPalindromeHelper(char *s, int start, int end){
    
    //base case: 1 char
    if(start == end){
        return true;
    }
    
    //base case: 2 char
    else if(start == end - 1){  //compares two char next to each other
        return s[start] == s[end];
    }
    
    else{
        if ( s[start] == s[end] && isPalindromeHelper(s, start + 1, end - 1)  ){
            return true;
        }
        
        return false;
        //move through the string
    }
}

bool isPalindrome(char * s){
    
    return isPalindromeHelper(s, 0, strlen(s) - 1 );
}





int main(int argc, char **argv)
{
	printf("Recursive Palindrome function.\n");
    printf("0 -> False\n1 -> True\n\n");

    char* str1 = "racecar";
    printf("%s: %d\n", str1, isPalindrome(str1));

    char* str2 = "bobby";
    printf("%s: %d\n\n", str2, isPalindrome(str2));
	return 0;
}