////Accept the N numbers from the user and prints the numbers which multiplies of 11

#include<stdio.h>
#include<stdlib.h>

void Display(int *ptr, int iSize)
{
    int i = 0;

    for(i = 0; i < iSize ; i++)
    {
        if(ptr[i] % 11 == 0)
        {
            printf("%d ",ptr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;

    printf("Enter the number of elements\n");

    scanf("%d",&iSize);

    int *ptr = NULL;
    
    ptr =(int *)malloc(iSize * sizeof(int));

    printf("Enter the %d elements\n",iSize);

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        printf("Enter %d elements\n",(iCnt + 1));
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);

    free(ptr);

    return 0;
}