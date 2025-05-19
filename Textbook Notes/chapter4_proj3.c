#include <stdio.h>
#include <math.h>

int main(void){

    //Quadratic Equation Solver
    printf("\nQuadratic Equation Solver------------------\n");
    printf("This program computes the roots to solve the equation: ax^2 + bx + c = 0\n");
    printf("\nPlease enter the values for a, b, c (seperated by spaces): ");

    float a, b, c;
    fflush(stdout);
    scanf("%f%f%f", &a, &b, &c);

    printf("\n%.2f, %.2f, %.2f\n", a, b, c);

    float discriminant, root1, root2;
    discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        printf("\nTwo Real Solutions!");
        root1 = (-b + discriminant) / 2*a;
        root2 = (-b - discriminant) / 2*a;
        
        printf("\nRoot 1: %.2f\nRoot 2: %.2f\n\n", root1, root2);
    }
    else if (discriminant == 0) {
        printf("\nOne Real Solution");
        root1 = -b / 2*a;

        printf("\nRoot: %.2f\n\n", root1);
    }
    else if (discriminant < 0) {
        printf("\nNo Real Solutions! (Imaginary!)");
        
        float root1_real, root1_imag, root2_real, root2_imag;
        root1_real = -b / 2*a;
        root1_imag = sqrt( fabs(discriminant) );
        root2_real = root1_real;
        root2_imag = -root1_imag;
        printf("\nRoot 1: Real = %.2f, Imaginary = %.2f", root1_real, root1_imag);
        printf("\nRoot 2: Real = %.2f, Imaginary = %.2f\n\n", root2_real, root2_imag);   
    }

    return 0;
}
