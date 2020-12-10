#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Declare Variables
    int a, oddProduct = 0;

    //For loop that searches odd numbers between 3 and 15
    for (a = 3; a <= 15; a+2)
    {
        oddProduct *=a;
    }

    printf("Product of all odd numbers between 1 and 15 is %d\n", oddProduct);

    return 0;
}
