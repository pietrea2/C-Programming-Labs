#include <stdio.h>

//These pre-defined constants can be stored in a seperate library 
//such as <convert.h>
#define AREA 2337                          
#define SQ_MILES_PER_SQ_KILM 0.38610
#define SQ_FEET_PER_SQ_MILE (5280*5280)
#define SQ_INCH_PER_SQFOOT 144

int main(void) {
    
    /////////////////////////////////////////////////////////////////////////////printf
    printf("The decimal (base 10) value of 15 is %d.\n", 15);
    printf("The octal (base 8) value of 15 is %o.\n", 15);
    printf("The hexadecimal value of 15 (base 16) is %x.\n", 15);
    
    printf("\n\nThe decimal value of 025 is %d.\n", 025);
    printf("The decimal value of 0x37 is %d.\n", 0x37);
    
    printf("\n\nThe decimal value of the letter %c is %d.\n", 'a', 'a');
    printf("\nThe octal value of the letter %c is %o. \n", 'a', 'a');
    printf("\nThe hex value of the letter %c is %x. \n\n", 'a', 'a');




    /////////////////////////////////////////////////////////////////////////////
    printf("answer1 is the integer %d.", 9/4);
    printf("\nanswer2 is the interger %d.", 17/3);
    
    printf("\n\nThe remainder of 9 divided by 4 is %d.", 9%4);
    printf("\n \nThe remainder of 17 divided by 3 is %d.", 17 % 3);
    
    printf("\n\nThe number is %6.2f.\n", 26.27);
    printf("\nThe number is |%6.2f|.\n", 682.3);
    printf("\nThe number is %6.2f.\n", 1.968);
    
    printf("\n\n$%6.2f\n", 26.27);
    printf("%7.2f\n", 682.3);
    printf("%7.2f\n", 1.968);
    printf("-------\n");
    printf("$%6.2f\n\n", 26.27 + 682.3 + 1.968);
    
    printf("\nThe sales tax is $%5.2f.\n", 0.05*36);
    printf("The total bill is $%5.2f.\n", 37.80);
    
    printf("\nThe value of 14 in octal is %o.\n", 14);
    printf("The value of 14 in hexadecimal is %x.\n", 14);
    printf("The value of 0xA in decimal is %d.\n", 0xA);
    printf("The value of 0xA in octal is %o.\n\n", 0xA);
 
    printf("\n\nHelllo there!\nHere are the interger values of\n"
           "a, m ,and n respectively:\n"
           "%d, %d, and %d.\n\n", 'a', 'm', 'n');
 
    char ch;
    int num1;
    float num2;
    double num3;
    
    printf("\n\nBytes of storage used by a character is: %d.\n", sizeof(ch));
    printf("Bytes of storage used by an interger is: %d.\n\n", sizeof(num1));
    printf("Bytes of storage used by a float is: %d.\n\n", sizeof(num2));
    printf("Bytes of storage used by a double is: %d.\n\n", sizeof(num3));




/////////////////////////////////////////////////////////////////////
double moneyVal;
printf("Please type in how much money you would like to recieve: "
"(Please be realistic, and type in a value that is below $1 000 000)\n");
scanf("%lf", &moneyVal);

if (moneyVal < 1000000 && moneyVal >= 0) {
    printf("\nThere you go, you will recieve |$%9.2lf|. Don't"
            " spend it all at one place :) .\n\n", moneyVal);}
else if (moneyVal < 0) {
    printf("\nHahah why would you want to loose money? Alright then, "
            "You will loose |$%9.2lf|. Happy?\n\n", moneyVal);}
else {
    printf("\nHEY! I told you to be realistic!!! As a punishment, "
            "you don't get any money.\n\n");}





/////////////////////////////////////////////////////////////////////////
int miles, yards;
float Km1, Km2;

miles = 26;
yards = 385;

Km1 = 1.609 * (miles + yards / 1760);       //int result value 
Km2 = 1.609 * (miles + yards / 1760.0);     //float result value due to 1760.0

printf("%fkm, %fkm\n", Km1, Km2);

float test1 = 1.5 * (2 / 2);
float test2 = 1.5 * (2 / 2.0);
printf("%f, %lf\n", test1, test2);
printf("%f, %d\n", 1.5 * (2 / 2), 3/2);






////////////////////////////////////////////////////////////////////////
double sq_mile, sq_feet;
    
const int pacific_sea = AREA;

sq_mile = SQ_MILES_PER_SQ_KILM * pacific_sea;
sq_feet = SQ_FEET_PER_SQ_MILE * sq_mile;


printf("%lf %lf\n", sq_mile, sq_feet);
printf("%d %f %d %d\n", AREA, SQ_MILES_PER_SQ_KILM, SQ_FEET_PER_SQ_MILE, SQ_INCH_PER_SQFOOT);





////////////////////////////////////////////////////////////////////////
//This code returns the sum of two fractions
int a, b, c, d, e, f;

printf("Enter first fraction: \n");
scanf("%d/%d", &a, &b);                      //The scanf function awaits an input of
                                             //"interger/interger" form (with the slash)
printf("Enter the second fraction: \n");
scanf("%d/%d", &c, &d);  

e = a*d + b*c;            //numerator
f = b*d;                  //denominator

printf("The sum of %d/%d and %d/%d is %d/%d.\n\n", a, b, c, d, e, f);





////////////////////////////////////////////////////////////////////////
float length, width, area;
    
length = 27.2;
width = 13.6;
area = length * width;

printf("The length of the rectangle is %f.\n", length);
printf("The width the of the rectangle is %f.\n", width);
printf("The area of the rectangle is %f.\n\n", area);


int length2, width2, area2;
length2 = 2; width2 = 15; area2 = length2 *  width2;
printf("\nThe second area comes out to be: %d m^2.\n\n", area2);


float a, b, c, d, average;

a = 32.6; b = 55.2; c = 67.9; d = 48.6;
average = (a + b + c + d)/4;

printf("\n\nThe average of the numbers\n%5.2f, %5.2f, %5.2f and %5.2f"
            " is %5.2f.\n\n", a, b, c, d, average);
    

float radius = 3.3, circumf = 2* 3.1416 * radius;
printf("\nThe circumference of a circle with a radius of "
        "%8.4f inches is %8.4f inches^2.\n\n", radius, circumf);
        
        
float fahrenheit = 98.6, celsius = (5.0/9.0) * (fahrenheit - 32.0);
printf("\n%5.1f degrees Fahrenheit converts to %5.1f degrees Celsius.\n\n", fahrenheit, celsius);


float halfDol = 12, quarters = 20, dimes = 32, nickels = 45, pennies = 27, 
        pig_total = halfDol*0.50 + quarters*0.25 + dimes*0.10 + nickels*0.05 + pennies*0.01;
printf("\n\nThe total about of money in the piggy bank is:$%6.2f.", pig_total);


int *num_addr; 
int miles, dist;

dist = 158;
miles = 22;
num_addr = &miles;

printf("The address stored in num_addr is %u\n", num_addr);
printf("The value pointed to by num_addr is %d\n\n", *num_addr);

num_addr = &dist;    //now this variable holds the address of another variable

printf("The address now stored in num_address is %u\n", num_addr);
printf("The value now pointed to by num_address is %d\n", *num_addr);

char fkey, skey;

printf("\nType in a character: ");
scanf("%c", &fkey);
printf("The key just accepted is %d", fkey);
printf("\nType in another character: ");
scanf("%c", &skey);
printf("The key just accepted is %d", skey);





//////////////////////////////////////////////////////////////////
int a = 5, b = 2, c = 4, d = 6, e = 3;
printf("\n%d %d %d %d %d %d %d %d %d\n\n", a > b, a != b, d%b == c%b, a*c != d*b, d*b == c*e, a*b, a%b*c, c%b*a, b%c*a);
    

//////////////////////////////////////////////////////////////////
int month, day;
printf("Enter a month (use the chart below to type in your month as a number: \n"
        "___________________________________\n"
        "| January = 1       July = 7      |\n"
        "| February = 2      August = 8    |\n"
        "| March =3          September = 9 |\n"
        "| April = 4         October = 10  |\n"
        "| May = 5           November = 11 |\n"
        "| June = 6          December = 12 |\n\n");
scanf("%d", &month);

printf("\nEnter a day of the month (0-31): \n\n");
scanf("%d", &day);

if ( month >= 1 && month <= 12) {
    
    if (day >= 1 && day <= 30) {
        
        if (month == 1)
            printf("\nYAY! Happy birthday on January %d!!\n\n", day);
        else if (month == 2)
            printf("\nYAY! Happy birthday on February %d!!\n\n", day);
        else if (month == 3)
            printf("\nYAY! Happy birthday on March %d!!\n\n", day);
        else if (month == 4)
            printf("\nYAY! Happy birthday on April %d!!\n\n", day);
        else if (month == 5)
            printf("\nYAY! Happy birthday on May %d!!\n\n", day);
        else if (month == 6)
            printf("\nYAY! Happy birthday on June %d!!\n\n", day);
        else if (month == 7)
            printf("\nYAY! Happy birthday on July %d!!\n\n", day);
        else if (month ==8)
            printf("\nYAY! Happy birhtday on August %d!!\n\n", day);
        else if (month == 9)
            printf("\nYAY! Happy birthday on September %d!!\n\n", day);
        else if (month == 10)
            printf("\nYAY! Happy birthday on October %d!!\n\n", day);
        else if (month == 11)
            printf("\nYAY! Happy birthday on November %d!!\n\n", day);
        else if (month == 12)
            printf("\nYAY! Happy birthday on December %d!!\n\n", day);
    }
    else 
        printf("\nYou inputed an invalid day! Oops!\n\n");
} 
else
    printf("\nYou inputed an invalid month! Sorry!\n\n");




    return 0;
}