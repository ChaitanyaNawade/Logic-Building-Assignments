//write the program from the user and prints the difference between the summation of factors and non factors

#include<stdio.h>
int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    for(iCnt = 1; iCnt < iNo ; iCnt++)
    {
        if((iNo % iCnt == 0))
        {
            iSumFact = iSumFact + iCnt;
        }
        else if((iNo % iCnt != 0))
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }
    return(iSumFact - iSumNonFact);
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number :\n");

    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("The difference between summation of factors and nonfactors is : %d",iRet);

    return 0;
}