//Accept amount in US dollars and return its corresponding amount in indian rupees

#include<stdio.h>

float ConvertINR(float iAmount)
{
    float Exchange_Rate = 83.10f;

    float indianAmount = iAmount * Exchange_Rate;

    return indianAmount;

}

int main()
{
    float iValue = 0.0f;
    float iRet = 0.0f;

    printf("Enter the amount in USD\n");

    scanf("%f",&iValue);

    iRet = ConvertINR(iValue);

    printf("The total amount of US dollar in INR is %f",iRet);

    return 0;
}