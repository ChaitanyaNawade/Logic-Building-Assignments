/*
Accept N numer from the user and display such element which are divided by 5 
*/

#include<stdio.h>
#include<stdlib.h>

void Display(int *Arr,int iLength)
{
    int i = 0;

    for(i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] % 5 == 0)
        {
            printf("%d\n",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0 ,  iCnt = 0;

    int *ptr = NULL;

    printf("Enter the numbers of elements :\n");

    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the %d elements in the array\n",iSize);

    for(iCnt = 0; iCnt < iSize ; iCnt++)
    {
        printf("Enter %d element : ",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);

    free(ptr);
    
    return 0;
}