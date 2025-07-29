// Program to divide two numbers

#include<stdio.h>
int divide(int iNo1, int iNo2)
{
    int iAns = 0;
    
    if(iNo2 < 0)
    {
        return -1;
    }

    
    iAns = iNo1/iNo2;
    return iAns;
}
int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int res = 0;
    printf("Enter the first number :\n");
    scanf("%d",&iValue1);

    printf("Enter the second number :\n");
    scanf("%d",&iValue2);

    res = divide(iValue1,iValue2);
    printf("The division of two numbers is : %d\n",res);

    
    return 0;
}
