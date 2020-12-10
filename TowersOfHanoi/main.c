#include <stdio.h>
#include <stdlib.h>

void towerOfHanoi(int diskAmount, char rOne, char rThree, char rTwo)
{
    //When Only One disc is being moved
    if (diskAmount == 1)
    {
        printf("\nHere, we move disk 1 from peg %c to peg %c ",rOne,rThree);
        return;
    }

    //Algorithm for more than one disk
    towerOfHanoi(diskAmount-1, rOne,rTwo,rThree);
    printf("\n Here, we move disk %d from peg %c to peg %c ",diskAmount,rOne,rThree);
    towerOfHanoi(diskAmount-1,rTwo, rThree, rOne);
}

int main()
{
    //Declaring user to enter the amount of disks
    int diskAmount;
    printf("Enter how many disks you want for this puzzle ");
    scanf("%d", &diskAmount);

    //Output
    towerOfHanoi(diskAmount, 'A', 'C', 'B');
    printf("\nThis is where we get our solution");
    return 0;
}
