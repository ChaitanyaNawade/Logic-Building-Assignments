// Write the program to find the factorial of given number

#include<stdio.h>

int DisplayFact(int iNo)
{
    int iCnt = 0;

    int iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number: \n");

    scanf("%d",&iValue);

    iRet  = DisplayFact(iValue);

    printf("The factorail of number is %d\n",iRet);

    return 0;
}