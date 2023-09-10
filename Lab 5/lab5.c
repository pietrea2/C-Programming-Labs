#include <stdio.h>
#include <stdbool.h>

char printSpace (int numSpaces);
int choose (int n, int r);
int factorial (int n);
void triangle (int NumberOfRows);

int main(void) {
    
    int inputRows;

    while (true) {
        
        printf("Enter the number of rows: ");
        scanf("%d", &inputRows);
    
        if (inputRows == 0) {
            printf("");
        }
        else if (inputRows > 0) {
            triangle(inputRows);
        }
        else if (inputRows < 0) {
            return 0;
        }
    }
}





void triangle(int NumberOfRows) {
    
    for ( int Row = 1; Row <= NumberOfRows; Row++ ) {
        
        printSpace( 3 * NumberOfRows - 3 * Row );
        int n = Row - 1;
        
        for ( int r = Row - 1; r <= Row - 1 && r >= 0; r--) {
            
            int Number = choose(n,r);
            
            printf("%-3d", Number);
            
            if (r <= Row - 1) {
                printSpace(3);
            }
        }
        
        printf("\n");
    
    }
}



char printSpace (int numSpaces) {
    for (int i = 1; i <= numSpaces; i++) {
        char space = ' ';
        printf("%c", space);
    }
}



int choose (int n, int r) {
    int result = factorial(n) / ( factorial(r) * factorial(n-r) );
    
return result;
}



int factorial (int n) {
    int result = 1;
    
    for (int i = 1; i <= n; i++ ) {
        result = result * i;
    }
return result;
}