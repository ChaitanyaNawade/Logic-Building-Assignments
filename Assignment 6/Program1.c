/*
 write a program which accept the number from the user if no is less than 50 print small
 if the number is greater than 50 and less than 100 then prints medium 
 if it is greater than 100 then print large
*/

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 50)
    {
        printf("The Number is small");
    }
    else if(iNo > 50 && iNo < 100)
    {
        printf("The number is medium");
    }
    else if(iNo > 100)
    {
        printf("The number is large");
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number : \n");

    scanf("%d",&iValue);

    Display(iValue);
    
    return 0;
}