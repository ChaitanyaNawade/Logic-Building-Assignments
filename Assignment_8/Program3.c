//Write the program which takes the input in kilometer and prints its output into the meter

#include<stdio.h>

int ConvertMeter(int iNo)
{
    int i = 1000;

    int Meter = 0;

    Meter = iNo * i;

    return Meter;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the distance into the kilometer :\n");
    
    scanf("%d",&iValue);

    iRet = ConvertMeter(iValue);

    printf("The distance in meter is : %d",iRet);
    
    return 0;
}