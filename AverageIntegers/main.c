#include <stdio.h>
#include <stdlib.h>

int main()
{

    //Declare Variables
    float avg = 0;
    int counter = 0, total = 0, number;

    //User Input
    printf("Enter as many numbers as you want ");
    scanf("%d", &number);

    //9999 will end the program
    while(number!=9999)
    {
        total = total + number;
        counter++;

        scanf("%d", &number);
    }

    //Calculates
    if(counter >= 0)
    {
        //Converts int into a float
        avg = (float)total / counter;

        //Prints Output
        printf("From the numbers you entered, the average is %.1f\n", avg);
    }


    return 0;
}
