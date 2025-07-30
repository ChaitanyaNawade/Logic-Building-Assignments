//Write the program which accept the radius of circle as input from the user and calculates its area


#include<stdio.h>

double CalculateArea(float Radius)
{
    float PI = 3.14f;

    float Area = 0.0f;

    Area = PI * Radius * Radius;

    return Area;
}

int main()
{
    float iRad = 0.0;
    float fRet = 0.0;

    printf("Enter the radius of circle\n");

    scanf("%f",&iRad);

    fRet = CalculateArea(iRad);

    printf("The area of circle is %f",fRet);

    return 0;
}