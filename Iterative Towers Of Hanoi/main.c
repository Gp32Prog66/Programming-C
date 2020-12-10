#include <stdio.h>
#include <stdlib.h>

void puzzle(int p)
{
    //Declare Variable
    int diskAmount = 1;

    //Iterative For Statement
    for(diskAmount = 1; diskAmount<(1<<p); diskAmount++)
    printf("\n Here, we the move disk from peg %d to peg %d ",(diskAmount&(diskAmount-1))%3 + 1,(((diskAmount |(diskAmount - 1)) + 1)%3+1));

}

int main()
{
    //Declare Variables
    unsigned int programRepeat = 1;
    int numberOfDisks;

    //Looping the Program
    do {

    //User Input
    printf("Enter how many disks you want for this puzzle ");
    scanf("%d", &numberOfDisks);

    //User Output
    puzzle(numberOfDisks);
    printf("\nThis is where we get our solution ");

    //Ask User If They Want to Continue
    printf("\nWould you like to repeat the program? ( 1 For Yes\t 0 For No )");
    scanf("%u", &programRepeat);

    } while (programRepeat != 0 ); //End the Loop
    return 0;
}
