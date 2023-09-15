#include <stdio.h>

int main(int argc, char **argv)
{
	//printf("hello world\n");
    
    unsigned long int i_hello = 0x6f6c6c6548;
    unsigned long int i_world = 431316168567;
    
    printf("%i\n%s", &i_hello, &i_world);
    
	return 0;
}