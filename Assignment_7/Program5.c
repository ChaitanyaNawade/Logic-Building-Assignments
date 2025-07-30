//Write the program to print the given factorial of number

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;
    int iFactEven = 1;
    int iFactOdd = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iFactEven = iFactEven * iCnt;
        }
        else if(iCnt % 2 != 0)
        {
            iFactOdd = iFactOdd * iCnt;
        }
    }

    return iFactEven - iFactOdd;
}
int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter the number\n");

    scanf("%d",&iValue);

    iRet = Display(iValue);

    printf("The difference between the Even and odd factorial is %d",iRet);

    return 0;
}