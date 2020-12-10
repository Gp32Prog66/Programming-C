#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    //Declaring Variables
    int column, row, reverse;

    //Print A-D

    //A
    for (row =1; row <=10; row++)
    {
        for(column = 1; column <= row; column++ )
        {
            printf("*");
        }
            printf("\n\n");
    }
    /////////////////////////////////

    //B
    for (row = 10; row >=1; row-- )
    {
        //Prints * for shape
        for ( column = 1; column <= row; column++ )
        {
            printf("*");
        }
            printf("\n\n");
    }
    /////////////////////////////////

    //C
    for (row = 10; row >=1; row--)

    {
        for (reverse = 1; reverse <= 10 - row; reverse++)
        {
            printf(" ");
        }

        //Prints * for shape
        for (column = 1; column <= row; column++)
        {
            printf("*");
        }
        printf("\n\n");
    }

    ////////////////////////////////

    //D
    for (row = 1; row <= 10; row++)
    {
        for (reverse = 1; reverse <= 10 - row; reverse++)
        {
            printf(" ");
        }

        //Prints * for shape
        for (column = 1; column <= row; column++)
        {
            printf("*");
        }
        printf("\n\n");
    }
    printf("\n\n");
    return 0;
}
