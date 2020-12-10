#include <stdio.h>
#include <stdlib.h>

void towerOfHanoi(int diskAmount, char rOne, char rThree, char rTwo)
int main(void)
{
   int numberOfDisks, rOne, rTwo, rThree;

   printf("Enter how many disks you want for this puzzle ");
   scanf("%d", numberOfDisks);

    for(int i = 1; i <= numberOfDisks; i++){
        numberOfDisks = numberOfDisks - 1;

    towerOfHanoi(diskAmount-1, rOne,rTwo,rThree);
    printf("\n Here, we move disk %d from peg %d from peg %c to peg %c ", numberOfDisks,rOne, rThree, rTwo);
    towerOfHanoi(diskAmount-1,rTwo, rThree, rOne);
    printf("This is where we get our solution ");
    }
    return 0;
}

