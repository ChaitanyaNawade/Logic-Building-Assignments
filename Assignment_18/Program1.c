/*
Accept N numer from the user and return the difference between the summation of even number and odd numbers
*/
#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[],int iSize)
{
    int iCnt = 0;
    int iSumEven = 0;
    int iSumOdd = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0)
        {
            iSumEven = iSumEven + Arr[iCnt];
        }
        else
        {
            iSumOdd = iSumOdd + Arr[iCnt];
        }
    }

    return iSumEven - iSumOdd;
}

int main()
{
    int iSize = 0, iRet = 0 , iCnt = 0;

    int *ptr = NULL;

    printf("Enter the number of elements :\n");

    scanf("%d",&iSize);

    if(iSize < 0)
    {
        printf("Invalid Input\n");
        return -1;
    }

    ptr =(int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter %d elements\n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter element : %d\n",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iSize);

    printf("The difference between the summation of even and odd elements is : %d",iRet);

    free(ptr);

    return 0;
}