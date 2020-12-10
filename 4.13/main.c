#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Initialize product variable. Will get different answer without it
    int product = 1;

    //Reading numbers between 1 and 15
    for (int x = 1; x <=15; x+=2){
        product *= x;
    }

    //Output
    printf("The answer is %d\n", product);
    return 0;
}
