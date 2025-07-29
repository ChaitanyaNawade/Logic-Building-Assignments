//Write the program which accept the N from the user and prints the first 5 multiples of that number

#include<stdio.h>

void DisplayMultiplies(int iNo)
{
    int i = 0;

    for(i = 1 ; i <= 5 ; i++)
    {
        printf("%d ",i*iNo);
    }
}
int main()
{
    int iValue = 0;
     
    printf("Enter the number : \n");

    scanf("%d",&iValue);

    DisplayMultiplies(iValue);

    return 0;
}