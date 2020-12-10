#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare Variables
    int numbers, factorials;

    //Output Headers
    printf("Here is the factorials of one through five. Enjoy! ");

    printf("\nNumbers\t\tFactorials");

    //For statement that goes between 1 and 5
    for(numbers = 1; numbers<=5; numbers++)
    {
        //Initialize factorials variable to 1
        factorials = 1;

        //Checking if numbers is greater than or equal to 1
        for(int i = numbers; i >= 1; i--)
        {
            //Doing the factorial
            factorials = factorials * i;
        }
        //Output of the numbers and factorials
        printf("\n\n%d\t\t%d\n\t\t", numbers, factorials);
    }

    return 0;
}
