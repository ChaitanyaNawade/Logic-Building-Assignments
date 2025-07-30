//Write a Program which accept the number from the user and print the given pattern 

#include<stdio.h>

void Display(int iNo)
{

    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        printf("%c ",'*'); 
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        printf("%c ",'#');
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");

    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}