#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declare Variables
    double total = 0;
    int product, quantity;

    //User input
    printf("Enter Product numbers and Quantities.\n (Type -1 to quit.)");
    scanf("%d", &product);

    //Execute until user types -1
    while(product != -1)
    {
        scanf("%d", &quantity);

        //Switch Statement to determine price of the product
        switch(product)
        {
        case 1:
            total += quantity *2.98; //retail price from book
            printf( "Product Code: %d\n",product);
            printf( "Quantity: %d\n", quantity);
            break;

        case 2:
            total += quantity * 4.50; //retail price from book
            printf( "Product Code: %d\n",product);
            printf( "Quantity: %d\n", quantity);
            break;

        case 3:
            total += quantity * 9.98; //retail price from book
            printf( "Product Code: %d\n",product);
            printf( "Quantity: %d\n", quantity);
            break;

        case 4:
            total += quantity * 4.49; //retail price from book
            printf( "Product Code: %d\n",product);
            printf( "Quantity: %d\n", quantity);
            break;

        case 5:
            total += quantity *6.87; //retail price from book
            printf( "Product Code: %d\n",product);
            printf( "Quantity: %d\n", quantity);
            break;

        default:
            printf("No Product Code found");
        }

        //continue scanning products until the loop ends
        scanf("%d", &product);
    }

    //Displays Retail value(Receipt)
    printf("Your total comes to $%.2f\n", total);
    return 0;
}
