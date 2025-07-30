//Write the program which accept the temprature in farenheit and prints the output into celcius

#include<stdio.h>

float FtoCel(float Faren)
{
    float Celcius = 0.0f;

    Celcius = (Faren - 32) * (5.0/9.0);

    return Celcius;
}
int main()
{
    int iValue = 0.0;

    float fRet = 0.0f;

    printf("Enter the temprature into farenheit\n");

    scanf("%d",&iValue);

    fRet = FtoCel(iValue);

    printf("The temprature in celcius is : %f ",fRet);

    return 0;
}
