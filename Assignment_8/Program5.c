//Write the program which accept the area in feet from the user and prints the op into square metere

#include<stdio.h>

float ConvertToMeter(int iNo)
{
    float Squarefeet = 0.0929;

    float toFeet = 0.0f;

    toFeet = iNo * Squarefeet;

    return toFeet;
}
int main()
{
    int iValue = 0;
    float fRet = 0.0f;
    printf("Enter the area in feet : \n");

    scanf("%d",&iValue);

    fRet = ConvertToMeter(iValue);

    printf("The area in meter is %f",fRet);

    return 0;
}