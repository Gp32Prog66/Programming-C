#include <stdio.h>
#include <stdlib.h>
#define SIZE 99

//Function Prototypes
void mean(const unsigned int answer[] );
void median(unsigned int answer[]);
void mode(unsigned int freq[], unsigned const int answer[]);
void bubbleSort(int a[]);
void printArray(unsigned const int a[]);

int main(void)
{
    unsigned int frequency[10] = {0}; //Initializing frequency array variable

    //Initialize array response
    unsigned int response[SIZE] =
   {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
    7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
    6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
    7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
    6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
    7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
    5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
    7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
    7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
    4, 5, 6, 1, 6, 5, 7, 8, 7};

    //Process responses
    mean(response);
    median(response);
    mode(frequency,response);

    return 0;
}
//Calculate average of all response values
void mean(const unsigned int answer[])
{
    printf("%s\n%s\n%s\n", "********", " Mean", "********");

    unsigned int total = 0; // Variable to hold sum of array elements

    // Total response values
    for (size_t j = 0; j < SIZE; j++)
    {
        total += answer[j];
    }

    printf("The mean is the average value of the data items.\n The mean is equal to the total of all the data items (%u). The mean value for this run is: %u / %u = %.4f\n\n"
           ,SIZE, total, SIZE, (double) total / SIZE);

           //Sort Array
           void median(const unsigned int answer[])
           {
               printf("\n%s\n%s\n%s\n%s",
                      "********", "Median", "********",
                      "The unsorted array of responses is");

                      printArray(answer); //Output unsorted array

                      bubbleSort(answer); //Sort Array

        printf("%s", "\n\nThe sorted array is");
        printArray(answer); //Output sorted array

        //Display median element
        printf("\n\nThe Median is element %u of\n the sorted %u element array.\n For this run the median is %u\n\n", SIZE / 2, SIZE, answer[SIZE / 2]);

           }

           //Determine most frequent response
           void mode(int freq[], const int answer[])
           {
               printf("\n%s\n%s\n%s\n", "********", " Mode", "********");

               //Initialize frequencies to 0
               for (size_t rating = 1; rating <= 9; ++rating)
               {
                   freq[rating] = 0;
               }

               // Summarize frequencies
               for (size_t j = 0; j <SIZE; j++)
               {
                   ++freq[answer[j]];
               }

               //Output headers for result columns
               printf("%s%11s%19s\n\n%54s\n%54s\n\n", "Response", "Frequency", "Histogram", "1  1  2  2", "5  0  5  0  5 ");

                //Output Results
                unsigned int largest = 0; //Largest Frequency
                unsigned int modeValue = 0; //Most frequent response

                for (int rating = 1; rating <= 9; rating++)
                {
                    printf("%8u%11u    ", rating, freq[rating]);

                    //Keep Track of Mode Value and Largest Frequency Value
                    if (freq[rating] > largest)
                    {

                        largest = freq[rating];
                        modeValue = rating;
                    }

                    //Output histogram
                    for (unsigned int h = 1; h <= freq[rating]; h++)
                    {
                        printf("%s", "*");
                    }

                    puts(""); //New Line
                }

                //Display Mode
                printf("\nThe mode is the most frequent value.\n For this run the mode is %u which occurred %u times.\n", modeValue, largest);
           }

           //Function that sorts an array with bubble sort algorithm
           void bubbleSort(unsigned int a[])
           {
               //Loop Control number of passes
               for (unsigned int pass = 1; pass <SIZE; pass++)
               {
                   //Loop Control number of comparisons per pass
                   for (size_t j = 0; j < SIZE - 1; j++)
                   {
                       //Swap Elements if out of order
                       if (a[j] > a[j + 1])
                       {
                           unsigned int hold = a[j];
                           a[j] = a[j + 1];
                           a[j + 1] = hold;
                       }
                   }
               }
           }

           //Output array contents (There will be 20 values per row)
           void printArray(const unsigned int a[])
           {
               //Output array contents
               for (size_t j = 0; j < SIZE; j++)
               {
                   if (j % 20 == 0)
                   {
                       //Begin new line every 20 values
                       puts("");
                   }

                   printf("%2u", a[j]);
               }
           }

}

