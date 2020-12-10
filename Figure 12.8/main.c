#include <stdio.h>
#include <stdlib.h>

//Self-Referential Structure
struct stackNode
{
    int data; //Each listNode contains a character
    struct stackNode *nextPtr; //Pointer to next node
};

typedef struct stackNode StackNode; //Synonym for struct StackNode
typedef StackNode *StackNodePtr; //Synonym for StackNode*

//Prototypes
void push(StackNodePtr * topPtr, int value);
int pop(StackNodePtr *topPtr);
int isEmpty(StackNodePtr sPtr);
void printStack(StackNodePtr currentPtr);
void instructions(void);

int main(void)
{
    StackNodePtr stackPtr = NULL; //Initially there are no nodes
    int value; //Char entered by user

    instructions(); //Displays Menu
    printf("%s", "? ");
    unsigned int choice; //User's Choice
    scanf("%u", &choice);

    //Loop while user does not choose 3
    while (choice != 3)
    {

        switch (choice)
        {
        case 1:
            printf("%s", "Enter an Integer: ");
            scanf("%d", &value);
            push(&stackPtr, value); //Insert item in list
            printStack(stackPtr);
            break;
        case 2: //Delete an element
            //If Stack isn't empty
            if(!isEmpty(stackPtr))
            {
                printf("The popped value is %d.\n", pop(&stackPtr));
            }

             printStack(stackPtr);

            break;
        default:
            puts("Invalid choice.\n");
            instructions();
            break;
        }

        printf("%s", "? ");
        scanf("%u", &choice);

    }

    puts("End of Run.");


}

//Display Program Instructions
void instructions(void)
{
    puts("Enter your choice:\n"
         "  1 to insert an element on the stack.\n"
         "  2 to delete an element off the stack.\n"
         "  3 to end program.");
}

//Insert a new value into the list in sorted order
void push(StackNodePtr *topPtr, int info)
{
    StackNodePtr newPtr = malloc(sizeof(StackNode)); //Create Node

    if (newPtr != NULL)   //Space Available?
    {
        newPtr->data = info; //Place Value in node
        newPtr->nextPtr = *topPtr; //Node doesn't link to another node
        *topPtr = newPtr;
    }
    else{
        printf("%d not inserted. No memory available.\n", info);
    }
}


int pop(StackNodePtr *topPtr)
{
    StackNodePtr tempPtr = *topPtr;
    int popValue = (*topPtr)->data;
    *topPtr = (*topPtr)->nextPtr;
    free(tempPtr);
    return popValue;
}

//Print the stack
void printStack(StackNodePtr currentPtr)
{
    //If Stack is Empty
    if (currentPtr == NULL)
    {
        puts("Stack is empty. \n");
    }
    else
    {
        puts("The Stack is:");

        //While not the end of the list
        while(currentPtr != NULL)
        {
            printf("%d --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }

        puts("NULL\n");
    }
}

//Return 1 if the stack is empty, 0 otherwise
int isEmpty(StackNodePtr topPtr)
{
    return topPtr == NULL;
}

