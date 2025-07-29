//Write the program which accept the number from the user and print its all non factors
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            printf("%d ",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");

    scanf("%d",&iValue);

    DisplayFactor(iValue);

    return 0;
}