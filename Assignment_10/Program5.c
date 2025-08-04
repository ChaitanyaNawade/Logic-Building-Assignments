//Write a program which accept the number from user and prints the difference between summatio of even digit and odd Digit
#include<stdio.h>

int CountDif(int iNo)
{
    int iDigit = 0;
    int iEvenSum = 0;
    int iOddSum = 0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else if(iDigit % 2 != 0)
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo /10;
    }
    return iEvenSum - iOddSum;
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number :\n");

    scanf("%d",&iValue);

    iRet = CountDif(iValue);

    printf("The difference between summation of evensum and oddsum is :%d\n",iRet);
    return 0;
}