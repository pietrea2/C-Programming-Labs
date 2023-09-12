#include <stdio.h>
#include <stdbool.h>


//declaring functions for PROBLEM 2
bool isPrime(int n);

int main(void) {
    

    //PROBLEM 1
    //Giver input 'n'
    //output: 1 + 2 + 3 + ... + n
    int num, count, sum = 0;
    
	printf("Enter an interger: ");
    scanf("%d", &num);
    
    for (count = 1; count <= num; count++) {
        sum = sum + count;        //or write sum+=count
    }
    
    printf("Sum = %d\n", sum);




    //PROBLEM 2
    //input: a number
    //output: a sum of two prime numbers PN1 + PN2
    //num = n
    //           1, 2, 3, 4, ... n/2 - 1 | n/2 + 1    ... n-3, n-2, n-1, n.

    //k -- check if it is prime
    //n-k -- check if it is prime
    int n, i, flag = 0;
    
    printf("Enter a positive interger: ");
    scanf("%d", &n);
    
    for (i = 2; i <= n/2 ; i++) {      //the pair of 0 and 1 is not considered, therefore start from i = 2
        
        if (isPrime(i) == true) {
            if (isPrime(n-i) == true) {
                printf("%d = %d + %d\n", n, i, n-i);
                flag = 1;
            }
        }
    }
    
    if (flag == 0) {
        printf("No valid outputs");
    }


return 0;

}

//this function checks numbers from 2, 3, 4, to n/2  (1 is not included)
bool isPrime(int n) {
    int i;
    bool isPrime = true;            //this variable can be named anything else
    
    for (i = 2; i <= n/2 ; i++) {
        
        if (n%i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}