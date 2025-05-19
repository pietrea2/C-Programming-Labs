#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void){

    srand( time(NULL) );

    // Calculating PI
    printf("\nCalculating PI using Quarter Circle Probability-----------\n");
    int random_x, random_y, in_circle = 0, outside_circle = 0;
    float x_coord, y_coord;
    float area;
    for(int i = 0; i <= 1000; i++){
        
        random_x = rand() % 1001;
        random_y = rand() % 1001;

        x_coord = random_x / 1000.0;
        y_coord = random_y / 1000.0;

        //printf("%.3lf, %.3lf\n", x_coord, y_coord);
        if( x_coord*x_coord + y_coord*y_coord <= 1.0 ) in_circle++;
        else outside_circle++;

    }

    area = (float)in_circle / (in_circle + outside_circle);
    printf("\nArea: %.3lf\n", area);
    area *= 4.0;
    printf("\nEstimate of PI using 1000 random coordinates = %.3lf\n\n", area);


    return 0;
}
