#include <stdio.h>
#include <string.h>
#include <stdlib.h> // for malloc()

int count(char c);
void printString(char *string);
int count_char_occurance(char c, char *s);
void replace_chars(char *s, char oldChar, char newChar);
double averageLength(char *s);
char *strcat_ver2(char *s1, const char *s2);
void stringCopyVer1(char *p, char *q);
void stringCopyVer2(char *p, char *q);
void stringCopyVer3(char *p, char *q);
void stringCopyVer4(char *p, char *q);
int stringLength(char *p);
void stringCat(char *p, char *q);





int main(void){

    printf("\nChapter 7: Strings~~~~~~~~\n\n");
    printf("String - array of characters that contains a \"null character\" at the end (\'\\0\')\n");
    printf("\n2 Ways to Declare String:\n\t1) Assign String Constant to Char Array\n\t\t- char friend[] = \"Kate\"\n");
    printf("\t\t- char friend[] = {\'A\', \'d\', \'a\', \'m\', \'\\0\'}\n");
    printf("\t\t* can change/edit the string chars\n");

    printf("\n\t2) Pointer to Char Array:\n\t\t- char *pfriend = \"Kate\"\n");
    printf("\t\t* This points to a CONST char array (can\'t change string chars individually! must point to new string)\n");

    char friend[] = "Adam";
    char me[] = {'A', 'd', 'a', 'm', '\0'};
    printf("\nPrinting strings: %s, %s\n", friend, me);

    printf("\nReading & Writing Strings:---\n");
    printf("- scanf() -> skips all whitespace entered before any chars, and terminates at whitespace/new line/EOF\n");
    printf("- puts()  -> like printf() but only 1 parameter (string). Prints out string and all its whitespace\n");
    printf("- gets()  -> like scanf(), however it will read whole line of chars including whitespace. Terminates at new line\n\n");

    char *new_string;
    char new_string_2[20];
    printf("Please enter a string (can include spaces): ");
    gets(new_string_2);
    //gets(new_string);
    puts(new_string_2);

    printf("\n- putchar() -> input/putput is an int. use to print 1 char at a time\n");
    putchar(33);
    putchar('\n');
    int i = putchar('a');
    printf("\n%d", i);
    putchar(10);    // New line ascii code
    putchar(10);
    putchar('A');

    printf("\n\n- getchar() -> read a single char from stdinput. value returned is int value of char\nEnter a single char: ");
    int next_char = getchar();
    printf("Input char received: %c\n\n", next_char);
    putchar('z');

    printf("\n\nNow enter any string (with spaces), using while loop with getchar(): ");
    int j = count('a');
    printf("%d", j);

    printf("\nPrinting string using putchar() loop:\n");
    char *string1 = "Hello world!";
    char string2[] = "Hello second world!";
    printString(string1);
    printf("\n");
    printString(string2);

    printf("\n\nString Functions~~~~~~~~~~~\n");
    printf("Need to include string.h\n");
    printf("\n- strlen(): length of string (up to terminating char)\n");
    char *string3 = "Hello";
    char string4[10] = "Heya";
    printf("\t- Length of \"%s\" and \"%s\" is %d and %d\n", string3, string4, strlen(string3), strlen(string4));

    printf("\n- strcmp(s1, s2): compares 2 strings lexographically\n\t- compare char by char\n\t- shorter string precedes longer one\n\t- differing char, smaller value precedes larger ASCII value\n");
    printf("\t\t- return 0 if s1 = s1\n\t\t- return - when s1 precedes s2\n\t\t- return + when s1 follows s2\n\n");
    char *string5 = "cat";
    char string6[] = "Cat";
    printf("Comparing \"%s\" and \"%s\" = %d\n\n", string5, string6, strcmp(string5, string6));

    printf("- char* strcpy(char *s1, const char *s2): copies s2 to s1\n\t- make sure there is enough space in s1!\n\t- return value is pointer to s1\n\n");
    char string9[] = "Adam's string 2";
    char string10[19];
    // printf("String to copy: \"%s\"\n", string9);
    strcpy(string10, string9);
    fflush(stdout);
    printf("Copying string \"%s\" to new pointer -> \"%s\"\n", string9, string10);

    char *string7 = "Adam's string";
    char *string8 = malloc(strlen(string7) + 1);
    strcpy(string8, string7);
    fflush(stdout);
    printf("Copying string \"%s\" to new pointer -> \"%s\"\n", string7, string8);

    printf("\n- strcat(s1, s2): concatenate a copy of s2 to s1\n");
    char name[20] = "";
    strcat(name, "Adam");
    strcat(name, " ");
    strcat(name, "Pie");
    printf("\nStrcat() Example: \"%s\"\n", name);

    printf("\n- char* strchr(const char *s, int c): search for a char within a string (return pointer to the char or NULL when not found)\n");
    char *string11 = "This is a string";
    int index = strchr(string11, 'a') - string11;
    printf("\nFinding index of \'a\' in string \"%s\" -> %d\n\n", string11, index);

    printf("- strstr(s1, s2): finds and returns substring s2 in s1\n");
    char *string12 = "C Programming";
    char *string13 = "Program";
    int index2 = strstr(string12, string13) - string12;
    printf("\nIndex of substring \"%s\" in \"%s\" is -> %d\n", string13, string12, index2);

    char *string14 = "aaron";
    char *string15 = "Toronto";
    printf("Char occurences of \'%c\' in \"%s\" = %d\n", 'a', string14, count_char_occurance('a', string14) );
    printf("Char occurences of \'%c\' in \"%s\" = %d\n", 'o', string15, count_char_occurance('o', string15) );
    printf("Char occurences of \'%c\' in \"%s\" = %d\n", 'a', string15, count_char_occurance('a', string15) );
    char string16[] = "Toronto";
    printf("Replacing all \'%c\' with \'%c\' in \"%s\"", 'o', 'i', string16);
    replace_chars(string16, 'o', 'i'); 
    printf(" -> \"%s\"\n", string16);

    char string17[] = "This is a sentence here";
    char string18[] = "Hello Hello Gello Fello";
    printf("Average word length in \"%s\" is -> %.2f\n", string17, averageLength(string17) );
    printf("Average word length in \"%s\" is -> %.2f\n", string18, averageLength(string18) );

    char *new_cat_str = NULL;
    new_cat_str = strcat_ver2("Hello", " there!");
    printf("Concatenated using custom strcat() -> \"%s\"\n", new_cat_str);

    printf("\n\nDirect String Manipulation~~~~~~~~\n");
    printf("- can re-write strcpy():\n");
    char *string19 = malloc(sizeof(char) * 10);
    char *string20 = "Linkin";
    stringCopyVer1(string19, string20);
    fflush(stdout);
    printf("Copied \"%s\" to new string -> \"%s\"\n", string20, string19);
    
    stringCopyVer2(string19, "New string");
    fflush(stdout);
    printf("Copied \"%s\" to new string -> \"%s\"\n", "New string", string19);

    stringCopyVer3(string19, "Yellow");
    fflush(stdout);
    printf("Copied \"%s\" to new string -> \"%s\"\n", "Yellow", string19);

    stringCopyVer4(string19, "Blue");
    fflush(stdout);
    printf("Copied \"%s\" to new string -> \"%s\"\n", "Blue", string19);

    printf("\n- can re-write strlen():\n");
    printf("Length of string \"%s\" = %d\n", string19, stringLength(string19) );

    printf("\n- can re-write strcat():\n");
    char catstring[20] = "";
    char *string21 = "Good "; char *string22 = "dog!";
    printf("Concat strings \"%s\" and \"%s\"", string21, string22);
    fflush(stdout);
    stringCat(catstring, string21);
    stringCat(catstring, string22);
    printf(" -> \"%s\"\n", catstring);

    printf("\nArrays of Strings~~~~~~~~\n");
    printf("- we can create arrays of strings using 2 methods:\n\t- char num[][8] = {\"one\", \"two\", \"three\"}\n");
    printf("\t- char *num[] = {\"one\", \"two\", \"three\"}\n\n");

    printf("Command Line Arguments~~~~~~~~\n");
    printf("- From now on, we have been writing the main() function without any parameters\n");
    printf("- We can also write main as:\n\t main(int argc, char *argv[])\n");
    printf("\t\t-> argc: argument count\n\t\t-> argv: argument vector (array of argc+1 pointers, last pointer to NULL)\n");
    printf("\t\t\t- argv[0] holds the name of the exe\n\n");
    printf("- argv[] stores command line arguments as strings (even if they are ints)\n\t- thus we have functions in stdlib.h such as:\n");
    printf("\t\t- atoi(): convert string to int value\n");
    printf("\t\t- atof(): convert string to float value\n");
    printf("\t\t- atol(): convert string to long value\n\n");

    printf("- Command line arguments are to be seperated with a blank space\n");
    printf("- If you want to provide a string with spaces, enclose them with \"\" quotes\n\n");

    char *s = "";
    char *t = " ";
    printf("Strlen of \"\" and \" \" -> %d, %d\n", strlen(s), strlen(t) );


    return 0;

}

int count(char c){

    int next;
    int frequency = 0;
    getchar();  // catch new line before!
    while( (next = getchar()) != '\n'){
        if(next == c) frequency++;
    }
    return frequency;
}

void printString(char *string){

    while( *string != '\0' ){
        putchar(*string);
        string++;
    }

}

int count_char_occurance(char c, char *s){

    int count = 0;
    char *t = strchr(s, c);
    //printf("Here! Found char at %d\n", t - s);
    while( t != NULL ){
       count++;
       t = strchr(t+1, c);
       //printf("Here! Found char at %d\n", t - s);
    }

    return count;

}

void replace_chars(char *s, char oldChar, char newChar){
    
    char *t = strchr(s, oldChar);

    while( t != NULL ){
        *t = newChar;
        t = strchr(t+1, oldChar);
    }

}

double averageLength(char *s){

    int length = 0;
    for(int i = 0; s[i] != '\0'; i++) length++;
    printf("Length of string: %d\n", length);

    float ave = 0;
    int curLength = 0, numWords = 0;
    for(int i = 0; i < length + 1; i++){
        if(s[i] == ' ' || s[i] == '\0'){
            ave += (float) curLength;
            numWords++;
            printf("Word %d Length %d\n", numWords, curLength);
            curLength = 0;  // reset
        }
        else curLength++;
    }
    printf("Sum = %.2f number of words = %d\n", ave, numWords);
    
    return ave / numWords;
}

char *strcat_ver2(char *s1, const char *s2){

    char *newString = malloc(strlen(s1) + strlen(s2) + 1);
    strcpy(newString, s1);
    strcpy(newString + strlen(s1), s2);

    return newString;
}

void stringCopyVer1(char *p, char *q){

    while( *q != '\0'){
        *p = *q;
        p++;
        q++;
    }
    *p = '\0';
}

void stringCopyVer2(char *p, char *q){

    while( (*p = *q) != '\0' ){
        p++;
        q++;
    }
}

void stringCopyVer3(char *p, char *q){

    while( (*p++ = *q++) != '\0' );
}

void stringCopyVer4(char *p, char *q){

    while( *p++ = *q++ );
}

int stringLength(char *p){

    int i = 0;
    while( *p++ ) i++;
    return i;
}

void stringCat(char *p, char *q){

   while(*p) p++; // loop to the end of string p
   while( *p++ = *q++ );
}





