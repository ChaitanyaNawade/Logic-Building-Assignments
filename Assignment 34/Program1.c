//////////////////////////////////////////////////////
//write a program whihc search a first occurance of particular element from singly linear linked list 
//functio should return return positio at whihc element is found
//Input : 10->20->30->40->50->30->70
//Output :3
//////////////////////////////////////////////////////



#include<stdio.h>
#include<stdlib.h>
#define TRUE 1 
#define FALSE 0

typedef int BOOL;

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first, int no)
{
    PNODE newn = NULL;
     
    newn = (PNODE) malloc(sizeof(NODE));

    newn ->data = no;
    newn ->next = NULL;

    if(*first == NULL)
    {
        *first = newn;
    }
    else
    {
        newn ->next = *first;
        *first = newn;
    }
}

int Count(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
        iCount++;
        first = first ->next;
    }
    return iCount;
}

void Display(PNODE first)
{
    while (first != NULL)
    {
        printf(" |%d|->  ",first->data);
        first = first ->next;
    }
    printf("NULL\n");
}

int SearcFirstOcc(PNODE first,int no)   //  $$
{
    int iPos = 1;

    while(first != NULL)
    {
        if(first ->data == no)
        {
            return iPos;
        }
        iPos++;
        first =first ->next;
        
    }
    return -1;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int iPosi = 0; 
    InsertFirst(&head,70);
    InsertFirst(&head,30);
    InsertFirst(&head,50);
    InsertFirst(&head,40);
    InsertFirst(&head,30);
    InsertFirst(&head,20);
    InsertFirst(&head,10);

    Display(head);
    iRet = Count(head);

    printf("Number of elements in Linked list are :%d\n",iRet);

    iPosi = SearcFirstOcc(head,30);
    printf(" FirstOccurance is At position :%d\n",iPosi);

    return 0;
}
