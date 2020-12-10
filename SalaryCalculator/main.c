#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hours;
    double hourlyRate, salary;

    printf("Enter # of hours worked (-1 to end): ");
    scanf("%d", &hours);

    while (hours != -1)
    {
        if (hours <= 40){
            printf("Enter hourly rate of the worker ($00.00)");
    scanf("%f", &hourlyRate);
        }
        else
        {
            salary = hours * hourlyRate;
        }
    }



    printf("Salary is ");
    scanf("%f", &salary);
    return 0;
}
