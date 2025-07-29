//write the program from user and prints the summation of all its non factors
#include<stdio.h>

int Summation(int iNo)
{
    int iCnt = 0;   
    int iSum = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue = 0;

    int iRet = 0;

    printf("Enter the number :\n");

    scanf("%d",&iValue);

    iRet = Summation(iValue);

    printf("The summation of the nonFactors of the nubmer is %d",iRet);

    return 0;
}