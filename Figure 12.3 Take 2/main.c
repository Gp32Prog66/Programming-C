#include <stdio.h>
#include <stdlib.h>

//Self-Referential Structure
struct listNode
{
    char data; //Each listNode contains a character
    struct listNode *nextPtr; //Pointer to next node
};

typedef struct listNode ListNode; //Synonym for struct listNode
typedef ListNode *ListNodePtr; //Synonym for ListNode*

//Prototypes
void insert(ListNodePtr * sPtr, char value);
char delete(ListNodePtr * sPtr, char value);
int isEmpty(ListNodePtr sPtr);
void printList(ListNodePtr currentPtr);
void instructions(void);

int main(void)
{
    ListNodePtr startPtr = NULL; //Initially there are no nodes
    char item; //Char entered by user

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
            printf("%s", "Enter a character: ");
            scanf("\n%c", &item);
            insert(&startPtr, item); //Insert item in list
            printList(startPtr);
            break;
        case 2: //Delete an element
            //If List isn't empty
            if(!isEmpty(startPtr))
            {
                printf("%s", "Enter character to be deleted: ");
                scanf("\n%c", &item);
                //If Character is found, remove it
                if (delete(&startPtr, item))
                {
                    printf("%c deleted.\n", item);
                    printList(startPtr);
                }
                else
                {
                    printf("%c not found.\n\n", item);
                }
            }
            else
            {
                puts("List is empty.\n");
            }

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
         "  1 to insert an element into the list.\n"
         "  2 to delete an element from the list.\n"
         "  3 to end.");
}

//Insert a new value into the list in sorted order
void insert(ListNodePtr *sPtr, char value)
{
    ListNodePtr newPtr = malloc(sizeof(ListNode)); //Create Node

    if (newPtr != NULL)   //Space Available?
    {
        newPtr->data = value; //Place Value in node
        newPtr->nextPtr = NULL; //Node doesn't link to another node

        ListNodePtr previousPtr = NULL;
        ListNodePtr currentPtr = *sPtr;

        //Loop to find the correct location in the list
        while(currentPtr != NULL && value > currentPtr->data)
        {
            previousPtr = currentPtr; //Walk to.......
            currentPtr = currentPtr->nextPtr; // .....next node
        }
        //Insert new node at beginning of list
        if (previousPtr == NULL)
        {
            newPtr->nextPtr = *sPtr;
            *sPtr = newPtr;
        }
        else  //Inserts new node between previousPtr and currentPtr
        {
            previousPtr->nextPtr = newPtr;
            newPtr->nextPtr = currentPtr;
        }
    }
    else
    {
        printf("%c not inserted. No memory available.\n", value);
    }
}

//Delete A List Element
char delete(ListNodePtr *sPtr, char value)
{
    //Delete First Node if a match is found
    if (value == (*sPtr)->data)
    {
        ListNodePtr tempPtr = *sPtr; //Hold onto node being removed
        *sPtr = (*sPtr)->nextPtr; //De-Thread the Node
        free(tempPtr); //Free the de-threaded node
        return value;
    }
    else
    {
        ListNodePtr previousPtr = *sPtr;
        ListNodePtr currentPtr = (*sPtr)->nextPtr;

        //Loop to find the correct location in the list
        while (currentPtr != NULL && currentPtr->data != value)
        {
            previousPtr = currentPtr; //Walk to...
            currentPtr = currentPtr->nextPtr; // ...next node
        }

        //Delete node at currentPtr
        if (currentPtr != NULL)
        {
            ListNodePtr tempPtr = currentPtr;
            previousPtr->nextPtr = currentPtr->nextPtr;
            free(tempPtr);
            return value;
        }
    }

    return '\0';
}

//Return 1 if the list is empty, 0 Otherwise
int isEmpty(ListNodePtr sPtr)
{
    return sPtr == NULL;
}

//Print the List
void printList(ListNodePtr currentPtr)
{
    //If List is Empty
    if (isEmpty(currentPtr))
    {
        puts("List is empty. \n");
    }
    else
    {
        puts("The list is: ");

        //While not the end of the list
        while(currentPtr != NULL)
        {
            printf("%c --> ", currentPtr->data);
            currentPtr = currentPtr->nextPtr;
        }

        puts("NULL\n");
    }
    return 0;
}
