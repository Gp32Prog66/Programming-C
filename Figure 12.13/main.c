#include <stdio.h>
#include <stdlib.h>

//Self-Referential Structure
struct queueNode
{
    char data; //Define Data as a char
    struct queueNOde *nextPtr; //QueueNode pointer
};

typedef struct queueNode QueueNode;
typedef QueueNode *QueueNodePtr;

//Function Prototypes
void printQueue(QueueNodePtr currentPtr);
int isEmpty(QueueNodePtr headPtr);
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr);
void enqueue(QueueNodePtr *headPtr, QueueNodePtr * tailPtr, char value);
void instructions(void);

//Function main begins program execution
int main(void)
{
    QueueNodePtr headPtr = NULL; //Initialize headPtr
    QueueNodePtr tailPtr = NULL; //Initialize tailPtr
    char item; //Char input by user

    instructions(); //Display Menu
    printf("%s", "? ");
    unsigned int choice; //User's Menu Choice
    scanf("%u", &choice);

    //While User doesn't enter 3
    while (choice !=3)
    {
        switch(choice)
        {
        //Enqueue Value
        case 1:
            printf("%s", "Enter a character: ");
            scanf("\n%c", &item);
            enqueue(&headPtr, &tailPtr, item);
            printQueue(headPtr);
            break;
        //Dequeue Value
        case 2:
            //If queue isn't empty
            if(!isEmpty(headPtr))
            {
                item = dequeue(&headPtr, & tailPtr);
                printf("%c has been dequeued.\n", item);
            }
            printQueue(headPtr);
            break;
        default:
            puts("Invalid choice.\n");
            instructions();
            break;
        }

        printf("%s", "? ");
        scanf("%u", &choice);
    }

    puts("End of run.");

}

//Display Program Instructions to user
void instructions(void)
{
    printf("Enter your choice:\n"
           " 1 to add an item to the queue\n"
           " 2 to remove an item from the queue\n"
           " 3 to end\n");
}

//Insert node at queue tail
void enqueue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr, char value)
{
    QueueNodePtr newPtr = malloc(sizeof(QueueNode));

    if (newPtr != NULL)    //Space Available
    {
        newPtr->data = value;
        newPtr->nextPtr = NULL;

        //If Empty, insert node at head
        if (isEmpty(*headPtr))
        {
            *headPtr = newPtr;
        }
        else
        {
            (*tailPtr)->nextPtr = newPtr;
        }

        *tailPtr = newPtr;
    }
    else
    {
        printf("%c not inserted. No memory available.\n", value);
    }
}

//Remove Node from Queue head
char dequeue(QueueNodePtr *headPtr, QueueNodePtr *tailPtr)
{
    char value = (*headPtr)->data;
    QueueNodePtr tempPtr = *headPtr;
    *headPtr = (*headPtr)->nextPtr;

    //If Queue is Empty
    if (*headPtr == NULL)
    {
        *tailPtr = NULL;
    }

    free(tempPtr);
    return value;
}

//Return 1 if the queue is empty, 0 Otherwise
int isEmpty(QueueNodePtr headPtr)
{
    return headPtr == NULL;
}

//Print the Queue
void printQueue(QueueNodePtr currentPtr)
{
    //If Queue is Empty
    if(currentPtr == NULL)
    {
        puts("Queue is empty.\n");
    }
    else
    {
        puts("The queue is:");

        //While Not End of Queue
        while(currentPtr != NULL)
        {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }

        puts("NULL\n");
    }
}

