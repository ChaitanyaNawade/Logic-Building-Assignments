#include<stdio.h>

void Display(int iNo)
{

    if(iNo < 1)
    {
        iNo = -iNo;
    }

    int i = 0;

    for(i = 1; i <= iNo ; i++)
    {
        printf(" $ ");
        printf(" * ");
    }
}
int main()
{
    int iValue = 0;
    printf("Enter the number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}