//Write a program which accept the nubmer from user and checks if it contains zero in it or not


#include<stdio.h> 

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL Checkzero(int iNo)
{
    int iDigit = 0;
    BOOL bFlag = FALSE;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
             bFlag = TRUE;
             break;
        }
        iNo = iNo / 10;
    }

    return bFlag;
}

int main()
{
    int iValue = 0;
    printf("Enter the number :\n");
    scanf("%d",&iValue);

    BOOL bRet = FALSE;

    bRet = Checkzero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else 
    {
        printf("There is no zero");
    }
    return 0;
}