#include <stdio.h>
#include <stdbool.h>

int main(void){

	bool val_1 = true;
	bool val_2 = false;
	printf("True value is: %d, False is %d\n", val_1, val_2);

	printf("To make decisions, we use relational expressions.\nThey include relational operators such as: <, >, !=, ==\n");
	printf("\nValues of type char are ordered according to a \"collating sequence\".\n");
	printf("Mixed types can be used in relational expressions: when a char is compared to an int, the cahr's numerical value is used.\n");
	printf("It is not recommended to check for exact equality of floating points, because they can have differing precisions.\n");

	printf("\nIF/ELSE Statements:\n");
	int a, b;
	printf("Enter 2 ints seperated by a space:\n");
	fflush(stdout);
	scanf("%d %d", &a, &b);

	if(a == b) printf("The numbers are the same :)\n");
	else printf("The numbers are NOT the same;\n");

	printf("If/else statements can have empty statements, or compound statements (blocks)\n");

	int c, d;
	float x;
	printf("\nWe will solve for x in the equation: cx + b = 0.\nEnter the value of c and d (seperated by a space):\n");
	fflush(stdout);
	scanf("%d %d", &c, &d);

	if( c == 0 ) printf("Can't solve for x when c = 0.\n\n");
	else{
		x = -(float)d / c;
		printf("x = %.2lf\n\n", x);
	}

	printf("Logical Operators:\nBoolean expressions can be acted on using logcal operators.\n");
	printf("The 3 logical operators are:\n! (Not)\n&& (And)\n|| (Or)\n");
	printf("C uses a technique called \"Lazy Evaluation\" or \"Short Circuit Evaluation\" or \"Conditional Evaluation\".\n");
	printf("This means that it evaluates an expression from left to right (such as p && q)\n");
	printf("If p is false, then it does not evaluate q because it doesn\'t need to.\n");
	printf("Thus, it is smart to write expressions such as:\nif( b != 0 && a %% b == 0)\n");

	printf("\nLogician Augustus de Morgan created \"Morgan\'s Law\":\n");
	printf("!(p && q) = !p || !q\n");
	printf("!(p || q) = !p && !q\n");

	printf("\nNested IF Statements:\n");
	printf("Used when we want to choose between more than 2 alternatives.\nIt also helps make our code run more efficiently.\n");
	printf("We need to make sure we do not have the \"Dangling else\" problem.\n");

	printf("\nCase Statement: (Choosing from many alternatives)\n");
	printf("The expression that controls the switch statement must have a numerical value.\n");
	int e;
	char letter;
	printf("Enter a digit between 0 and 4: ");
	fflush(stdout);
	scanf("%d", &e);

	switch(e){
		case 0: letter = 'A';
				break;
		case 1: letter = 'B';
				break;
		case 2:
		case 3: letter = 'C';
				break;
		case 4: letter = 'D';
				break;
		default: letter = '?';
				 printf("Invalid input!\n");
				 break;
	}

	printf("You selected letter: %c\n\n", letter);


	printf("Conditional Statements:\n");
	printf("These statements are ternary (3 operands and 2 operators)\n");
	printf("expression ? true : false\n\n");

	int i;
	printf("Please enter an integer value: ");
	fflush(stdout);
	scanf("%d", &i);
	int signum = i < 0 ? -1 : (i == 0 ? 0 : 1);
	printf("Value of signum(%d) = %d", i, signum);





	return 0;
}
