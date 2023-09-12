#define PI 3.141592            //ALWAYS DEFINE CONSTANTS ON THE VERY FIRST LINES, NOT AFTER THE #INCLUDE HEADERS

#include <stdio.h>
#include <math.h>

int main(void) {
    
    //PROBLEM 1
    //finding the roots of a quadratic equation!!!!
    double a, b, c, root1, root2, delta;
	
    printf("Enter the coefficients of the quadratic equation: ");
    scanf("%lf%lf%lf", &a, &b, &c);
    
    printf("\n%lf %lf %lf", a, b, c);
    
    delta = pow(b,2) -4*a*c;
    printf("\nDelta D: %lf", delta);
    
    root1 = (- b + sqrt(delta)) / (2*a);
    root2 = (- b - sqrt(delta)) / (2*a);
    
    printf("\nThe roots are: %lf and %lf", root1, root2);
    



    //PROBLEM 2 
    double alpha, a2, b2, c2;
	
    printf("Enter the angle and two side lengths: ");
    scanf("%lf%lf%lf", &alpha, &b2, &c2);
    
    printf("\n%lf %lf %lf", alpha, b2, c2);
    
    a2 = sqrt(pow(b2,2) + pow(c2,2) - 2*b2*c2*cos(alpha*PI/180));
    printf("\n%lf", a2);

    printf("The third side is: %lf", a2);




    //PROBLEM 3
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, k, firstsum, secondsum, total;
    
    printf("Enter the digits: ");
    
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &d, &i1, &i2, &i3, &i4, &i5, &j1, &j2, &j3, &j4, &j5, &k);
    
    firstsum = d + i1 + i2 + i3 + i4 + i5;
    secondsum = j1 + j2 + j3 + j4 + j5;
    total = (3*firstsum) - (secondsum);
    
    printf("Correct if %d is equal to %d", k, total);




    //PROBLEM 4
    //calculating the class average mark from test
    int num_students;
    int score, cut;
    double average;
    
    printf("Enter total score and number of students: ");
    scanf("%d%d", &num_students, &score);
    
    average = (double) score / (double) num_students;
    cut = (int) average;
    
    printf("\nCompare Avg(double): %lf and trunc (int): %d\n", average, cut);







    return 0;
}
