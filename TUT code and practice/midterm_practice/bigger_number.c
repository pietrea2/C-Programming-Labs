#include <stdio.h>
#include <stdbool.h>

bool whichBiggerAndHowMuch(int x, int y);


int main(int argc, char **argv) {
    
    int first, second;
    
	printf("Enter first and second number: ");
    scanf("%d%d", &first, &second);
    
    if (whichBiggerAndHowMuch(first, second)) {
        printf("First number bigger by %d", first - second);
    }
    else {
        printf("Second number bigger by %d", second - first);
    }
    
    
	return 0;
}

bool whichBiggerAndHowMuch (int x, int y) {
    
    if (x > y) {
        return true;
    }
    else if ( x < y) {
        return false;
    }
    
}