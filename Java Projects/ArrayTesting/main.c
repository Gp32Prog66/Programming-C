#include <stdio.h>
#include <stdlib.h>
#define SIZE 99
int main()
{
    //Function Prototypes
    void mean(const unsigned int answer[]);
    void median(unsigned int answer[]);
    void mode(unsigned int freq[], unsigned const int answer[]);
    void bubbleSort(int a[]);
    void printArray(unsigned const int a[]);

    //Function main begins program execution
    int main(void)
    {
        unsigned int frequency[10] = {0}; //Initialize array frequency

        //Initialize array response
        unsigned int response[SIZE] =
        {
            6,7,8,9,8,7,8,9,8,9,
            7,8,9,5,9,8,7,8,7,8,
            6,7,8,9,3,9,8,9,7,8,
            7,8,9,8,9,8,9,7,8,9,
            6,8,9,8,9,8,9,8,9,2,
            7,8,9,8,9,8,9,7,5,3,
            5,6,7,2,5,3,9,4,6,4,
            7,8,9,6,8,7,8,9,7,8,
            7,4,4,2,5,3,8,7,5,6,
            4,5,6,1,6,5,7,8,7,};

        };

        //Process Responses
        mean(response);
        median(response);
        mode(frequency, response);

    }

    // Calculate Average of All Response Values
    void mean(const unsigned int answer[])
    {
        printf("%s\n%s\n%s\n")
    }
    return 0;
}
