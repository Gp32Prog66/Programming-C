#include <stdio.h>
#include <stdlib.h>
#define SIZE 15

 //Function Prototypes
    size_t binarySearch(const int b[], int searchKey, size_t low, size_t high);
    void printHeader(void);
    void printRow(const int b[], size_t low, size_t mid, size_t high);

int main()
{
    int a[SIZE]; //Array

    //Making Data
    for (size_t i = 0; i < SIZE; i++) {
        a[i] = 2 * i;
    }

    printf("%s", "Enter a number between 0 and 28: ");
    int key; // Locater in the array
    scanf("%d", &key);

    printHeader();

    // Searches the Key Variable in the Array
    size_t result = binarySearch(a, key, 0, SIZE - 1); //SIZE - 1 to prevent array from going out of bounds

    //Displaying Results
    if (result != -1){
        printf("\n%d found at index %d\n", key, result);
    }
    else{
        printf("\n%d not found\n", key);
    }


}

//Function to perform binary search of an array
size_t binarySearch(const int b[], int searchKey, size_t low, size_t high)
{
    //Loop until low index is greater than high index
    while(low <= high) {
        //Determine middle element of subarray being searched
        size_t middle = (low + high) / 2;

        // Display subarray used in this loop iteration
        printRow(b, low, middle, high);

        //if searchKey matched middle element, return middle
        if(searchKey == b[middle])
        {
            return middle;
        }

        //If searchKey is less than middle element, set new high
        else if (searchKey < b[middle])
        {
            high = middle - 1; // Search low end of array
        }

        //If searchKey is greater than middle element, set new low
        else {
            low = middle + 1; // Search high end of array
        }
    } // End While
    return -1; // searchKey not found

}

//Print header
void printHeader()
{
    puts("\nIndices:");

    //Output column head
    for (unsigned int i = 0; i < SIZE; i++)
    {
        printf("%3u ", i);
    }

    puts(""); //Start new line

    //Output line of - characters
    for (unsigned int i = 1; i <= 4 * SIZE; i++)
    {
        printf("%s", "-");
    }

    puts("");
}

//Print one row of output showing current part of the array being processed.
void printRow(const int b[], size_t low, size_t mid, size_t high)
{
    //Loop the array
    for (size_t i = 0; i < SIZE; i++)
    {
        //Display spaces if outside current subarray range
        if (i < low || i > high)
        {
            printf("%s", "  ");
        }
        else if(i == mid) // Displays middle element
        {
            printf("%3d*", b[i]);
        }
        else { // Display other elements in subarray
            printf("%3d ", b[i]);
        }
    }
    puts("");
}
