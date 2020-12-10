#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare Variables
    int numberAmount, sumTotal = 0, num;

    //User Input
    printf("How many numbers will you enter? ");
    scanf("%d", &numberAmount);

    //For Loop on how many numbers the user typed
    for (int user = 0; user <numberAmount; user++)
    {

    printf("Enter your number ");
    scanf("%d", &num);

    //Adds total numbers typed
    sumTotal = (sumTotal + num);
    }

    //Displays Sum
    printf("All the numbers entered add up to %d", sumTotal);
    return 0;
}
