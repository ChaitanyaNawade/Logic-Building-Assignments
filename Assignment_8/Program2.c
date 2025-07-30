//Write the program which accept the height and width of rectangle as input from the user and calculates its area


#include<stdio.h>

double CalculateArea(float Height,float Width)
{
    float Area = 0.0f;

    Area = Height * Width;

    return Area;
}

int main()
{
    float iValue1 = 0.0f;
    float iValue2 = 0.0f;
    float fRet = 0.0f;

    printf("Enter the Height of rectangle\n");

    scanf("%f",&iValue1);

    printf("Enter the Width of rectangle\n");

    scanf("%f",&iValue2);    

    fRet = CalculateArea(iValue1,iValue2);

    printf("The area of rectangle is %f",fRet);

    return 0;
}