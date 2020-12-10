#include <stdio.h>

int main(void)
{

    int y;
    int x = 10;
    int total = 0;

    while ( x >= 1) {
        y = x * x;
        printf( "%d\n", y);
        total += y;
        --x;
    }//end while

    printf( "The total is %d \n", total);
} //end main
