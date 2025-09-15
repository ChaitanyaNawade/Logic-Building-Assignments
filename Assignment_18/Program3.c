////Accept the N numbers from the user and prints the numbers which are divibed by 2 and 5
#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int i  = 0;
     
    for(i = 0 ; i < iLength ; i++)
    {
        if(Arr[i] % 2 == 0 && Arr[i] % 5 == 0)
        {
            printf("%d ",Arr[i]);
        }
    }
}

int main()
{
    int iSize = 0, iCnt = 0;

    int *ptr = NULL;

    printf("Enter the number of elements :\n");

    scanf("%d",&iSize);

    ptr =(int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    for(iCnt = 0 ; iCnt < iSize; iCnt++)
    {
        printf("Enter %d element :\n",iCnt + 1);
        scanf("%d",&ptr[iCnt]);
    }

    Display(ptr,iSize);

    free(ptr);

    return 0;
}