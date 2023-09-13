#include <stdio.h>
#include <string.h>

//STRINGS

//  char s[] = "Hello";        ---> make a character array to make a string 
//                             ---> remember to use double quotes!!!!

//  char *s = "Hello";         ---> use a charater pointer to make a string
//                             ---> BUT YOU CANT CHANGE THIS SRING NOW (cant mutate it)

// string library   --->   <string.h>

//string functions in <string.h>:

//         strcmp(const char *s, const char *s2);
//         strcpy(destination, source);
//         strcat(                   );
//         strchr(char *, char);
//         strstr(char *, char *);
//         strlen(char *);           ---> ignores the '\0' part of the string (doesnt count it)

//  EX:   for ( int i = 0; i < strlen(s); i++ );    ---> dont accomodate for the '\0' cell of array

int main(void) {
    
    //write a program that will look at a given character
    //in a given string and will print all the locations
    //of the string equal to that character
    
    char *s = "hello world!";
    
    char c = 'o';
    printf("Finding o char in string \"hello world\"\n");
    printf("Method 1: Checking all chars in string manually\n");
    for(int i = 0; i < strlen(s); i++){
        //s[i]   ---> *(s+i)
        if( s[i] == c ){
            printf("Found %c in the index %d\n", c, i);
            
        }
    }
    
    
    //using strchr function
    char *p;
    char *q = s;
    printf("\n\n\nMethod 2: Using strchr() function\n");
    while( strchr(q, c) != NULL ){
        
        p = strchr(q, c);
        //print location
        printf("Found %c in index %d\n", c, p - s);
        
        q = p + 1;
    }
    
    //put(s);

	return 0;
}