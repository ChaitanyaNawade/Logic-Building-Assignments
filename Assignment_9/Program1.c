//Write a program which accept the number from the user and Display its digits in reverse order
//Input : 5932
//Output : 2 3 9 5 but every element is on new line
#include<stdio.h>

void DisplayRev(int iNo)
{
    int iDigit = 0;

    if(iNo < 1)
    {
        iNo = -iNo;
    }

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        printf("%d\n",iDigit);
        iNo = iNo / 10;
    }
}


int main()
{
    
    int iValue = 0;
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    DisplayRev(iValue);
    return 0;
}