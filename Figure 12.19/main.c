#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Self-Referential Structure
struct treeNode
{
    struct TreeNode *leftPtr; //Pointer to Left Subtree
    int data; //Node Value
    struct treeNode *rightPtr; //Pointer to Right Subtree
};

typedef struct treeNode TreeNode; //Synonym for struct treeNode
typedef TreeNode *TreeNodePtr; //Synonym TreeNode*

//Prototypes
void insertNode(TreeNodePtr *treePtr, int value);
void inOrder(TreeNodePtr treePtr);
void preOrder(TreeNodePtr treePtr);
void postOrder(TreeNodePtr treePtr);

//Function Main Begins Program Execution

int main(void)
{
    TreeNodePtr rootPtr = NULL; //Tree Initially Empty

    srand(time(NULL));
    puts("The numbers being placed in the tree are:");

    //Insert Random Values between 0 and 14 in the tree
    for (unsigned int i = 1; i <= 10; ++i)
    {
        int item = rand() % 15;
        printf("%3d", item);
        insertNode(&rootPtr, item);
    }

    //Traverse The Tree preOrder
    puts("\n\nThe preOrder traversal is:");
    preOrder(rootPtr);

    //Traverse The Tree inOrder
    puts("\n\nThe inOrder traversal is:");
    inOrder(rootPtr);

    //Traverse the tree postOrder
    puts("\n\nThe postOrder traversal is:");
    postOrder(rootPtr);
    return 0;
}

//Insert Node into TreeNode
void insertNode(TreeNodePtr *treePtr, int value)
{
    //If Tree is Empty
    if (*treePtr == NULL)
    {
        *treePtr = malloc(sizeof(TreeNode));

        //Memory Allocation
        if(*treePtr != NULL)
        {
            (*treePtr)->data = value;
            (*treePtr)->leftPtr = NULL;
            (*treePtr)->rightPtr = NULL;
        }
        else
        {
            printf("%d not inserted. No memory available.\n", value);
        }
    }
//When Tree isn't empty
    else
    {
        //Data to insert is less than data in current node
        if (value < (*treePtr)->data)
        {
            insertNode(&((*treePtr)->leftPtr), value);
        }

        //Data to Insert is greater than data in current node
        else if(value > (*treePtr)->data)
        {
            insertNode(&((*treePtr)->rightPtr), value);
        }

        else   //Duplicate data value ignored
        {
            printf("%s", "dup");
        }
    }
}
//Begin inorder traversal of tree
void inOrder(TreeNodePtr treePtr)
{
    //If tree is not empty, then traverse
    if (treePtr !=NULL)
    {
        inOrder(treePtr->leftPtr);
        printf("3%d", treePtr->data);
        inOrder(treePtr->rightPtr);
    }
}

//Begin preorder traversal of tree
void preOrder(TreeNodePtr treePtr)
{
    //If tree is not empty, then traverse
    if(treePtr != NULL)
    {
        printf("%3d", treePtr->data);
        preOrder(treePtr->leftPtr);
        preOrder(treePtr->rightPtr);
    }
}

//Begin Postorder traversal of tree
void postOrder(TreeNodePtr treePtr)
{
    //If tree is not empty, then traverse
    if (treePtr != NULL)
    {
        postOrder(treePtr->leftPtr);
        postOrder(treePtr->rightPtr);
        printf("%3d", treePtr->data);
    }
}





