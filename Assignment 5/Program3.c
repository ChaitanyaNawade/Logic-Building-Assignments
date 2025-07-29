//Write the program which accept the input number from the user and prints the Numbr line of that number
// Input : 4
// Output : -4 -3 -2 -1 0 1 2 3 4
#include<stdio.h>

void PrintLine(int iNo)
{
    int i = 0;

    for(i = -4 ; i <= iNo ; i++)
    {
        printf("%d ",i);
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");

    scanf("%d",&iValue);

    PrintLine(iValue);

    return 0;
}