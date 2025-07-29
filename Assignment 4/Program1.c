//Write the program which multiplies the factors of the give number 
#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if((iNo % iCnt ) == 0)
        {
          iFact = iFact * iCnt;
        }
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    printf("Enter number :\n");
    scanf("%d",&iValue);
    
    iRet = MultFact(iValue);

    printf("The multiplication of factor is %d",iRet);


    return 0;
}