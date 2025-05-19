#include <stdio.h>
#include <stdbool.h>

void printLine(char c, int length);
void printTextBox(char * string, int margin, bool shaded);
void swap(int *a, int *b);
bool isPrime(int a);

int main(void){

    printf("\nChapter 5: Functions------------------\n");

    printf("\n5.1: Basics~~~~\n");
    printf("Modular Programming: breaking down problem into sub-problems\n");
    printf("Functions in C introduce this modularity\n");

    printf("\nFunctions in C are divided into 2 groups:\n");
    printf("\t1) Queries\n\t\t- always returns a value it calculates to the process that called it\n\t\t-ex: main() function -> returns 0 to OS\n");
    printf("\t2) Commands\n\t\t-simply returns control back to the process that calls it (doesn\'t return a value\n");

    printf("\n - Functions can be defined before or after the main() function\n");
    printf(" - Need to include a function decleration (function header with semicolon) for the compiler to know its identifier\n\n\n");

    printLine('~', 80);
    printf("\n\n5.2 Parameters~~~~\n");
    printf(" - functions have \"parameter lists\" which declare their parameters\n");
    printf(" - Call By Value: argument is evaluated and assigned to the parameter\n\n");

    printf("How C Program is stored in computer memory (compiled program)\n");
    printTextBox("Instructions", 2, true);
    printTextBox("Heap", 1, true);
    printTextBox("Unused Memory", 3, false);
    printTextBox("Runtime Stack", 1, true);

    printf("\n\n1) Heap: stores Dynamically Allocated Memory\n");
    printf("2) Stack: stores information about functions when called\n\t- parameters\n\t- function variables\n\t- return address\n\n\n");
    printLine('~', 80);

    printf("\n5.3 Functions That Return Values~~~~\n");
    printf("2 Types of Functions:\n1)Commands (implement commands)\n2)Functions (implement queries)\n");
    printf("\nIf a function returns a value, we are free to ignore it!\nEx: printf(); --> Returns int (number of chars written, or -1 if error)\n\n\n");
    printLine('~', 80);

    printf("\n5.4 Pointer Parameters~~~~\n");
    printf("&a --> Address of a\nint *p --> Pointer (has type int *, stores addresses)\n");
    printf("\nPointers are references to memory cells\nTo examine the memory contents we can use the dereferencing operator *\n");
    printf("\nAnother way to look at a pointer definition such as int *a is:\n\t- the expression *a will have an into value\n");
    printf("\nThus can declare pointers like this too:\ndouble a, b, *x, *y;\n\n");
    
    printf("\nswap() function example:\n");
    int number1 = 5, number2 = 23;
    printf("Number 1 = %d, Number 2 = %d\n", number1, number2);
    swap(&number1, &number2);
    printf("After swap() call:\n");
    printf("Number 1 = %d, Number 2 = %d\n\n\n", number1, number2);
    printLine('~', 80);

    printf("\n5.5 Functions That Return bool Values~~~~\n");
    printf("An effective way to improve the clarity of programs is to use Boolean Functions:\n"); 
    printf("\t- queries that return true or false\n\t- functions identifiers ofter begin with \"is\"\n");

    // Testing isPrime() bool function
    printf("\nLets test the isPrime() function. Here is a list of all primes between 1 - 1000:\n\n");
    for(int i = 1; i < 1000; i++){
        if( isPrime(i) ) printf("%d, ", i);
    }
    printf("\n\n\n");
    printLine('~', 80);

    printf("\n\n5.6 Scope and Storage Class~~~~\n");
    printf("- if a variable is declared inside a block that terminates, then that identifier can be re-declared and re-used elsewhere\n");
    printf("- if the definition of an external variable precedes that of a function in which it is used, that variable can be used in the function\n"); 
    printf("\t- otherwise the variable must be declared in the function using the keyword \"extern\"\n");

    printf("\nExtern variable:\n");
    printf("\t- permits the use of an external variable within a function/file\n");
    printf("\nGlobal variable:\n\t- if definition of var is placed in a file before any functions, it can be used by any function in that file (thus global)\n\n");
   
    printf("Storage Class (of a variable):\n");
    printf("Determines when an item exists, when it is initialized, and how it is stored\n\n");
    printf("\t1) Automatic (default)\n\t\t- only exists during execution of code (in its scope)\n\t\t- any value that variable has at the end of the block is then lost\n\t\t- if not reset each time that block is entered, the variables value is garbage\n\t\t\t- use keyword \"auto\" to declare automatic variables (but no need!)\n\n");

    printf("\t2) Static Class:\n");
    printf("\t\t- any external variables (defined outside of functions)\n\t\t- exist from beginning to end of program\'s execution\n");
    printf("\t\t- can declare static vars withing functions using \"static\" keyword\n");
    printf("\t\t\t- unlike auto vars, they remain in existence after their block finishes and they retain their value!!!\n");
    printf("\t\t\t- subsequent calls do not re-initialize the var (they keep their old value)\n");

    printf("\n\t3) Register Variable\n");
    printf("\t\t- faster to retrieve/store values from/to register compared to having to copy from memory to register\n");
    printf("\t\t\t- (takes less clock cycles for CPU)\n");
    printf("\t\t- good to know which vars we will change/update most frequently (limited number of registers avilable)\n");
    printf("\n\t\t- using \"register\" keyword tells compiler that value be stored in a register instead of memory\n");
    printf("\t\t\t- if no free registers available, compiler will ignore\n");
    printf("\n\t\t- Can only be used on \"auto\" variables\n\t\t- Also! Can\'t use & operator bc it doesn\'t have an address in memory!\n\n\n");
    printLine('~', 80);

    printf("\n\n5.8 Organizing Larger Programs~~~~\n");
    printf("- .h Header Files --> collection of function declarations\n");
    printf("\t- include .h in every file that needs these function declarations\n\n");
    printf("\n- external/global variables:\n");
    printf("\t- declare and initialize in main file\n\t- in all other files (functions in different files), include decleration of variable using \"extern\" keyword\n\n\n");


    return 0;

}


void printLine(char c, int length){

    for(int i = 0; i < length; i++){
        printf("%c", c);
    }
    printf("\n");

}

void printTextBox(char * string, int margin, bool shaded){

    int a = 0;
    while(string[a] != '\0'){
        a++;
    }
    // printf("\nLength of string = %d\n\n", a);

    char space;
    if(shaded) space = '/';
    else space = ' ';

    for(int i = 0; i < 35; i++) printf("-");
    printf("\n");

    for(int i = 0; i < margin; i++){
        for(int j = 0; j < 35; j++){
            if(j == 0 || j == 34) printf("|");
            else printf("%c", space);
        }
        printf("\n");
    }

    int white_spaces = 35 - 2 - a;
    printf("|");
    for(int i = 0; i < white_spaces / 2; i++) printf("%c", space);
    printf("%s", string);
    for(int i = 0; i < white_spaces / 2 + white_spaces % 2; i++) printf("%c", space);
    printf("|\n");

    for(int i = 0; i < margin; i++){
        for(int j = 0; j < 35; j++){
            if(j == 0 || j == 34) printf("|");
            else printf("%c", space);
        }
        printf("\n");
    }
    for(int i = 0; i < 35; i++) printf("-");
    printf("\n");
}

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

bool isPrime(int a){

    if(a % 2 == 0) return false;
    
    for(int i = 3; i < a; i += 2){
        if(a % i == 0) return false;
    }

    return true;
}

