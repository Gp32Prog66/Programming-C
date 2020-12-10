#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare Variables
    int amount, answer, number, countNumber;


do {
    //User Input
    printf("\nHow many numbers do you want to type? ");
    scanf("%d", &amount);

    //Loops if user types 0
    if(&amount <= 0)
    {
        printf("You can't have 0 or negative numbers");
    }
}while(amount <= 0);

    //Prompts user to enter their first number
    printf("Enter your first number ");
    scanf("%d", &number);

    //For statement will loop until it meets it's requirement
    for (countNumber = 3; countNumber<=number; countNumber++)
{
    printf("Enter another number ");
    scanf("%d", &number);

    //If statement finds the smallest number
    if ( answer > number)
    {
        answer = number;
    }
}
    //Outputs smallest number
    printf("The smallest number is %d", answer);
    return 0;
}
