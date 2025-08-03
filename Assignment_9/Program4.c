//Write a program which accept the nubmer from user and counts the frequency of 4 in that number

#include<stdio.h>
int CountTwo(int iNo)
{
    if(iNo < 1)
    {
        iNo = -iNo;
    }

    int iDigit = 0;
    int iCount = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 4)
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
    printf("Enter the number :\n");

    scanf("%d",&iValue);

    iRet = CountTwo(iValue);

    printf("The frequency of 4 in %d is %d\n",iValue,iRet);
    return 0;
}