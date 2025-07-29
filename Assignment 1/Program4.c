#include<stdio.h>
#include<stdbool.h>



bool CheckDivide(int iNo)
{
    if((iNo % 5 ) == 0)
    {
        return true;
    }
    else 
    {
        return false;
    }
}
int main()
{
    int iValue = 0;
    bool bRet = false;
    printf("Enter the number to check whether it is divisible by 5  \n");
    scanf("%d",&iValue);

    bRet  = CheckDivide(iValue);

    if(bRet == true)
    {
        printf("The no is divisible by 5\n");
    }
    else
    {
       printf("The no is not divisible by 5\n");
    }
    return 0;
}