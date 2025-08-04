//Write a program which accept number from user and return the count of digit in between 3 and 7 
#include<stdio.h>

int CountEven(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit >= 3 && iDigit <= 7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter the Number\n");

    scanf("%d",&iValue);

    iRet = CountEven(iValue);

    printf("The Count of even digit in number is : %d",iRet);

    return 0;
}