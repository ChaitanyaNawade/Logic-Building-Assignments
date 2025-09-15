//Accept the N numbers from the user and prints the numbers which are divibed by 3 and 5

#include<stdio.h>
#include<stdlib.h>

void CountElement(int Arr[],int iSize)
{
    int i = 0, Flag = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        if(Arr[i] % 3 == 0 && Arr[i] % 5 == 0)
        {
            printf("%d ",Arr[i]);
            Flag = 1;
        }       
    }

    if(Flag == 0)
        {
            printf("None\n");
        }
        else 
        {
            printf("\n");   
        }
}

int main()
{
    int iSize = 0, iCnt = 0;

    int *ptr = NULL;

    printf("Enter the Numbers of elements\n");
    
    scanf("%d",&iSize);

    if(iSize < 0)
    {
        printf("Invalid Input\n");
        return -1;
    }

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d Numbers of element\n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    CountElement(ptr,iSize);

    free(ptr);

    return 0;
}