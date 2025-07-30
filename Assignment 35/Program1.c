//////////////////////////////////////////////////////
//write a program which Display all perfect element from singly linear linked list 
//functio should return return positio at whihc element is found
//Input : 11->28->17->41->6->89
//Output :6  28
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

int DisplayPerfect(PNODE first)
{
    int i = 1;
    int iSum = 0;

    while(first != NULL)
    {
        if(first->data % i == 0)
        {
            iSum = iSum + i;
        }
        first = first ->next;
    }
    return first->data;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int iPerf = 0; 
    InsertFirst(&head,89);
    InsertFirst(&head,6);
    InsertFirst(&head,41);
    InsertFirst(&head,17);
    InsertFirst(&head,28);
    InsertFirst(&head,11);

    Display(head);
    iRet = Count(head);

    printf("Number of elements in Linked list are :%d\n",iRet);

    iPerf = DisplayPerfect(head);
    printf("Perfect no from Linked list are :%d",iPerf); 

    return 0;
}
