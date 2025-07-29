#include<stdio.h>
void Display(int iNo,int iFrequency)
{
    int iCnt = 0 ;
    for(iCnt = 1; iCnt <= iFrequency ; iCnt++)
    {
        printf("%d  ",iNo);
    }
}
int main()
{
    int iValue1 = 0;
    printf("Enter the first number :\n");
    scanf("%d",&iValue1);

    int iCount = 0;
    printf("Enter the second number :\n");
    scanf("%d",&iCount);

    Display(iValue1,iCount);

    return 0;
}