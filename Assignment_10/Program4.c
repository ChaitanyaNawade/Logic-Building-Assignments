//Write a program which accept number from user and return the multiplication of  digit 
#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iMult = 1;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iMult = iMult * iDigit;
        iNo = iNo / 10;
    }
    return iMult;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");

    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("Multiplication of digits is : %d",iRet);

    return 0;
}