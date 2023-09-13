#include <stdio.h>

//EX 3: draw the pattern:

//****
//***
//**
//*
//**
//***
//****

//BASE CASE: * (one star)

void printRow(int n){
    
    for(int i = 0; i < n; i++){
        printf("* ");
    }
    printf("\n");
}


void printPattern(int n){
    
    //base case
    if(n == 1){
        printf("*\n");
    }
    else{
        //non base case
        printRow(n);
        printPattern(n - 1);
        printRow(n);
    }
    
}


int main(int argc, char **argv)
{
	printPattern(5);
	return 0;
}