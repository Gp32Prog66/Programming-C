#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    //Declare Variables
    int yearCount,interestRate;
    float amount, principal = 1000.0;

    //Interest rate from 5% to 10% for statement
    for (interestRate = 5; interestRate <= 10; interestRate++)
    {
        //Output Display Header
        printf("Interest %.2f\n", interestRate / 100.0);
        printf("%s%21s\n", "Year","Amount on Deposit\n\n");


    for (yearCount = 1; yearCount <= 10; yearCount++){

        //Calculations
        amount = principal * pow(1 + (interestRate / 100.0), yearCount);

        //Output
        printf("%4u%9.2f\n", yearCount, amount);
        printf("\n");
    }
    }




    return 0;
}
