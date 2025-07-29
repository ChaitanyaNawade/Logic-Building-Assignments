#include<stdio.h>
#define true 1
#define false 0

typedef int bool;
 
bool ChkEven(int iNo)
{
    if(iNo % 2 == 0)
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
    printf("Enter the number \n");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);
    if(bRet == true)
    {
        printf("The no is even \n");
    }
    else 
    {
        printf("the no is odd\n");
    }


    return 0;
}