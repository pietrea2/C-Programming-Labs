#include <stdio.h>
char printSpace(int numSpaces);
char printTriangle(int numTriangles);

int main(void) {
    
    //this code draws a triangle (traced out by
    //tiny '^' trinagles with a prompted number of rows
    int InputRows;
    
    printf("Enter the number of rows in the triangle: ");
    scanf("%d", &InputRows);
    
    for ( int row = 1; row <= InputRows; row++ ) {
            if (row == 1) {
                printSpace(InputRows - 1);
                printf("^");
                printSpace(InputRows - 1);
                printf("\n");
            }
            else if (row > 1 && row < InputRows) {
                printSpace(InputRows - row);
                printf("^");
                printSpace(2*row-3);
                printf("^");
                printSpace(InputRows - row);
                printf("\n");
            }
            else if (row == InputRows) {
                printTriangle(2*InputRows - 1);
                printf("\n");
            }
    }
    
return 0;
}
	

//declared function for printing out spaces
char printSpace ( int numSpaces ) {
    for ( int n = 1; n <= numSpaces; n++ ) {
        char b = ' ';
        printf("%c", b);
    }
}

//declared function for printing out 'v' characters
char printTriangle ( int numTriangles ) {
    for ( int a = 1; a <= numTriangles; a++ ) {
        printf("^");
    }
}