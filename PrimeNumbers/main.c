#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int total = 0;

    for (num=2;num<=30; num= num+2)
    {
        total += num;
    }

    printf("Below is the total of the even numbers between 2 and 30");
    printf("\n%d",total);
    return 0;
}
