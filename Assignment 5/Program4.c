//Write the program which accept N from user and prints the Odd numbers till that number

#include<stdio.h>

void DisplayOdd(int iNo)
{
    int i = 0;

    for(i = 1 ; i <= iNo ; i++)
    {
        if(i % 2 != 0)
        {
            printf("%d ",i);
        }
    }
}
int main()
{
    int iValue = 0;
    

    printf("Enter the number\n");

    scanf("%d",&iValue);

    DisplayOdd(iValue);

    return 0;
}