#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    //Declare Variables
    int accountNumber;
    float accountBalance, accountLimit, newLimit;


    for(int i = 1; i <= 3; i++)
    {
        //User Input
        printf("Enter Account Number ");
        scanf("%d", &accountNumber);
        printf("What is your balance ");
        scanf("%f", &accountBalance);
        printf("What is your limit ");
        scanf("%f", &accountLimit);

        //Calculates what the newLimit is for the user
        newLimit = accountLimit / 2.0;

        printf("New Credit limit %f:\n", newLimit);

        //Determining user Output

        //Checking if credit limit exceeded
        if(newLimit < accountBalance)
        {
            printf("Account number %d has exceeded their credit limit\n");
        }

        //Checking if credit limit has just been reached
        else if (newLimit == accountBalance){
            printf("Account numbers %d has just hit their credit limit\n", accountNumber);
        }
    }
    return 0;
}
