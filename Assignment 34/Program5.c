//////////////////////////////////////////////////////
//write a program which return smallest element from the singly linked list
//In thid program $ indicates the function which is asked in the problem statement 
//Input : 110->230->20->240->640
//Output :20
//////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first,int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
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

int FindMinumun(PNODE first)      //  $$
{
    int max = 0;

    max = first ->data;
    if(first == NULL)
    {
        return -1;
    }

    while(first !=  NULL)
    {
        if(first ->data < max)
        {
            max = first ->data;
        }
        first = first->next;
    }
    return max;
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|%d|->",first ->data);
        first = first ->next;
    }
    printf("NULL\n");
}

int Count(PNODE first)
{
    int iCount = 0;
    while(first ->next != NULL)
    {
        iCount++;
        first = first ->next;
    }
    return iCount;
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int iMin = 0;
    InsertFirst(&head,640);
    InsertFirst(&head,240);
    InsertFirst(&head,20);
    InsertFirst(&head,230);
    InsertFirst(&head,110);

    Display(head);
    iRet = Count(head);
    iMin = FindMinumun(head);

    printf("The smallest element from the Linked list is :%d",iMin);
    return 0;
}