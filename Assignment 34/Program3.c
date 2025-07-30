//////////////////////////////////////////////////////
//write a program which return the addition of all element fromm singly linear linked list
//In thid program $ indicates the function which is asked in the problem statement 
//Input : 11->21->51->101->111
//Output :295
//////////////////////////////////////////////////////




#include<stdio.h>
#include<stdlib.h>
struct node 
{
    int data ;
    struct node *next ;

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

int Addition(PNODE first)               //   $$
{
    int iSum  = 0;
    while(first != NULL)
    {
        iSum = iSum + first ->data;
        first = first ->next;
    }
    return iSum;
}

int Count(PNODE first)
{
    int iCount = 0;
    while(first != NULL)
    {
       iCount ++;
       first = first ->next; 
    }
    return iCount;
}

void Display(PNODE first)
{
    while(first != NULL)
    {
        printf("|%d|->",first->data);
        first =first ->next;
    }
    printf("NULL\n");
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;
    int iTotal = 0;
    InsertFirst(&head,111);
    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);
    iRet = Count(head);
    printf("The no of elements in linked list are : %d\n",iRet);

    iTotal = Addition(head);
    printf("The addition of elements in the linked list is :%d\n",iTotal);

    return 0;
}  