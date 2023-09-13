#include <stdio.h>

////RECURSION
//ex: factorial
//n * (n-1)! = n * (n-1) * (n-2)!

//GENERAL STRUCTURE OF A RECURSION FUNCTION
// if(the answer is trivial) {
    // return (print) answer
//else{
    //assume function works on a smaller problem --> call it --> use the result to build the answer to original problem
    

//EX: smaller problem

//array --> subarray
//list -->subList
//string --> substring
//number --> smaller number

//anything that can be done using a loop can be done using recursion!!!!!




//EX1: Find and calculate the value of x^n 

//if n is even:   x^n == ((x^n/2))^2
//if n is odd:    x^n == ( x^(n-1)/2 ) ^ 2

//BASE CASE: n = 0:  x^n = 1
//           n = 1: x^n = x

//find x^n, recursively
double power(double x, int n){
    
    double temp;

    //base case; n == 0
    if(n == 0){
        return 1;
    }
    
    //non base case: n is even
    if(n % 2 == 0){
        temp = power(x, n/2);
        return temp * temp;
    }
    //non base case: n is odd
    else{
        temp = power(x, (n - 1)/2);
        return temp * temp * x;
    }
    
    //different approach: return x * power(x, n - 1)
}

int main(int argc, char **argv)
{
	
    printf("2 raised to the power of 4 is %lf\n", power(2,4));
    printf("2 raised to the power of 5 is %lf\n", power(2,5));
	return 0;
}