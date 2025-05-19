#include <stdio.h>
#include <stdbool.h>

#define PEARS 20

int main(void){

	printf("\nAn Introduction to Computer Science Using C\n- By John Carter\n- Notes by Adam Pietrewicz\n\n");
	printf("--------------------------------");
	printf("\nCHAPTER 1: Getting Started\n");
	printf("--------------------------------\n\n");

	int a = 0;
	char b = 'b';
	printf("Printing variable b: %c\n", b);
	printf("Printing variable b: %d\n", b);

	const int c = 0;
	printf("Printing variable c: %d\n", c);

	short d = 12;
	long e = 222;
	long long ee = 234;
	long int eee = 232;
	float f = 1.2;
	double g = 3.334;
	unsigned int i = 23;
	signed int j = 23;
	bool jj = true;
	bool jjj = false;

	printf("\nPrinting sizeof() of variable types:\n");
	printf("Size of int: %d\n", sizeof(a));
	printf("Size of float: %d\n", sizeof(5.3));
	printf("Size of char: %d\n", sizeof('a'));
	printf("Size of short: %d\n", sizeof(d));
	printf("Size of long: %d\n", sizeof(e));
	printf("Size of long long: %d\n", sizeof(ee));
	printf("Size of long int: %d\n", sizeof(eee));
	printf("Size of float: %d\n", sizeof(f));
	printf("Size of double: %d\n", sizeof(g));
	printf("Size of void: %d\n", sizeof(void));
	printf("Size of unsigned int: %d\n", sizeof(i));
	printf("Size of signed int: %d\n", sizeof(j));
	printf("Size of bool: %d\n", sizeof(jj));


	printf("\nEvery main function has to return 0 at the end to the operating system.\n ");

	printf("\nA slash is \"\\\".\n");
	printf("A backslash is \"\\\".\n\n");

	printf("Bit stands for binary digit\n");
	printf("A \"nibble\" is 4 bits\nand a \"word\" is 4 bytes.\n");

	float k = 3.14;
	float l = 23.F;
	printf("\nPrinting floats: %f %f", k, l);
	float m = 100001;
	printf("\nPrinting in scientific notation: %e", m);

	printf("\n\nCharacters: %c %c %c", 'a', '\\', '\n');
	printf("Printing \\n should have printed a new line.");

	int n, o, p;
	double q = 2.3, r = 5.0001, s = 1.1112;

	printf("\n\nPlease enter 3 integer values seperated by spaces:\n");
	fflush( stdout );
	scanf("%d %d %d", &n, &o, &p);
	printf("Entered digits: n = %d, o = %d, p = %d\n\n", n, o, p);

	char t, u, v;
	printf("Lets prompt for 3 char values (seperate by spaces):");
	fflush( stdout );
	scanf("\n%c %c %c", &t, &u, &v);
	printf("Chars received: %c %c %c\n\n", t, u, v);

	printf("Lets prompt for 3 char values (seperate by ENTER):\n");
	fflush( stdout );
	scanf("\n%c\n%c\n%c", &t, &u, &v);
	printf("Chars received: %c %c %c\n\n", t, u, v);

	printf("Constant values of variables are called literals.\n");
	printf("Can define constants using const keyword or #define.\n");
	printf("COnstants are also called \"magic numbers\".\n");

	const int apple = 10;
	printf("Constants: apple = %d, pears = %d", apple, PEARS);




	return 0;
}
