#include <stdio.h>

double sin(double x);
int factoria(int x);
int power(double x, int y);

int main(void) {
    
    double value, result;
    
	printf("Enter a value: ");
    scanf("%lf", &value);
    
    printf("result = %.7lf", sin(value));
	return 0;
}

double sin(double x) {
    
    double fraction, sign = -1, sine = 0, xfact;
    
    for (int i = 1; i <= 19; i = i+2) {
        
        fraction = 1.0/factoria(i);
        xfact = power(x, i);
        sign =  sign*(-1);
        sine = sine + fraction*sign*xfact;
        
        printf("%lf\n", fraction);
        printf("%lf\n", xfact);
        printf("%lf\n", sign);
        printf("%lf\n", sine);
    }
    return sine;
}

int factoria(int x) {
    
    int ans = 1;
    
    for (int i = 1; i <= x; i++) {
        
        ans = ans*i;
    }
    return ans;
}

int power(double x, int y) {
    
    double num = 1;
    
    for (int i = 1; i <= y; i++) {
            
        num = num*i;
    }
    return num;
}