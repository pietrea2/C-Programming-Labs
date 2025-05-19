#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(void){

	printf("\n-----CHAPTER 2: Programs That Calculate-----\n");
	
	printf("\nUnary plus/minus have the highest precedance compared to all arithmetic operators.\n");
	printf("Ex: +3 -2\n");

	int a = 5;
	float b = 5.2;
	float c = a + b;
	printf("\nWhen operating with an int and a float value, the answer will be a float\n");
	printf("%d + %f = %f", a, b, c);

	int d = -15, e = 4;
	int f = d % e;
	printf("\n\nm%%n (modulo) takes the sign of m if either m or n is negative\n");
	printf("%d %% %d = %d", d, e, f);

	float g = 2.333;
	printf("\n\nWe can use \"casting\" to change a value's type:\n");
	printf("Ex: (int)g \n");
	printf("%f -> %d", g, (int)g );

	int h = 2, i = 2;
	int expr1 = (h++ + 1) * i;
	h = 2;
	int expr2 = (++h + 1) * i;
	printf("\n\nIncrement/Decrement Operator:\n");
	printf("j++ -> postfix (increment var after using old value in expression)\n++j -> prefix (increment var and use new value in expression)\n");
	printf("%d vs %d expression sol\'n\n", expr1, expr2);

	printf("\nAssignment operators: +=, -=, *=, /=, %%=\n");
	printf("Expression on the right of the operator is evaluated first");

	char row = 'A', col = '0';
	int row_int = row, col_int = col;
	printf("\n\nArithmetic with Chars:\n");
	printf("%c is %d, %c is %d\n", row, row_int, col, col_int);
	printf("row++ = %c\n", row++);

	printf("\nUsing Mathematical Functions:\n");
	printf("#include <math.h>");
	
	int j = -1;
	printf("\nfabs() -> abs value of double (returns double)");
	printf("\nfabs() of %d = %.2lf", j, fabs( (double)j ) );
	double k = 4, l = 26.0;
	printf("\nsqrt() -> double input and output");
	printf("\nsqrt($.2lf) = %.2lf, sqrt(%.2lf) = %.2lf", k, sqrt(k), l, sqrt(l));
	double m = 2.0, n = 10.0;
	printf("\npow(base, exp) -> double input/output");
	printf("\npow(%.2lf,%.2lf) = %.2lf", m, n, pow(m, n) );
	double o = -23, p = 41;
	printf("\nfmax(%.2lf,%.2lf) = %.2lf", o, p, fmax(o, p) );
	printf("\nfmin(%.2lf,%.2lf) = %.2lf", o, p, fmin(o, p) );
	double q = 2.342;
	printf("\nrint(%.2lf) = %.2lf (round to int)\n", q, rint(q) );
	printf("ceil(%.2lf) = %.2lf\n", q, ceil(q) );
	printf("floor(%.2f) = %.2f\n", q, floor(q) );
	const double PRECISION = 0.01;
	double inVal = 2.567;
	double roundVal = rint(inVal / PRECISION) * PRECISION;
	printf("We can round doubles to specified precision: %.3f rounded to nearest %.3f = %.3f\n", inVal, PRECISION, roundVal);
	printf("----------------------\nrand() function:\n");
	printf("To use rand() we must #include <stdlib.h>\n");
	printf("It returns pseudo-random sequence of int values\nthus we must call srand() to seed it (using time(NULL) from the time.h lib).\n");
	printf("Ex:\nsrand(time(NULL));\nrand();\n");
	srand( time(NULL) );
	printf("Random value: %d\n------------------------\n", rand() );
	const double PI = 3.141592654;
	printf("The math.h library should include constants like PI = %.9lf (but here it doesn\'t)\n", PI);
	printf("The math.h library has M_PI: %.9lf\n", M_PI);
	printf("Trig Functions:\n");
	double angle_1 = 30, angle_2 = 45, angle_3 = 90;
	printf("sin(%.0lf) = %.4lf\nsin(%.0lf) = %.4lf\nsin(%.0lf) = %.4lf\n", angle_1, sin( angle_1 * PI/180 ), angle_2, sin( angle_2 * PI/180 ), angle_3, sin( angle_3 * PI/180 ) );
	printf("Exponential anf Logarithmic FUnctions:\n");
	const double E = 2.7182818284590451;
	printf("We can define the constant E = %.10lf\n", E);
	printf("exp(1) = %lf\n", exp(1) );
	printf("log(E) = %lf\n", log(E) );
	int r = 3e3;
	printf("the char e represents ^10 when used in vars:\n3e3 = %d\n", r);


	printf("\n\nChapter 2 Assignment\n");
	printf("Equations that determine the month and date of Easter given year\n");
	int year;
	printf("Enter a year:\n");
	fflush(stdout);
	scanf("%d", &year);
	
	int p1 = year/100;
	int q1 = year - 19*(year/19);
	int r1 = (p1 - 17)/25;
	int s1 = p1 - p1/4 - (p1 - r1)/3 + 19*q1 + 15;
	s1 = s1 - 30*(s1/30);
	s1 = s1 - (s1/28) - ( 1 - (s1/28)*(29/(s1+1))*((21-q1)/11) );
	int t1 = year + year/4 + s1 +2 - p1 + p1/4;
	t1 = t1 - 7*(t1/7);
	int u1 = s1 - t1;
	int month = 3 + (u1 + 40)/44;
	int day = u1 + 28 - 31*(month/4);

	printf("Easter in %d is on %d/%d\n", year, day, month);


	return 0;
}

