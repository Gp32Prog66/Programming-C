#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{

    //Declare Variables
    float numDrinks, input;

    printf("Enter the amount of milligrams of caffiene ");
    scanf("%f", &input);

    //Calculations
    numDrinks = 1000/input;

    numDrinks = ceil(numDrinks);

    //Output
    printf("Number of drinks that will kill you", numDrinks);


    return 0;
}
