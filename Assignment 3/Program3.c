// Input : 24
// Output : 1 2 4 6 8 12

#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
    int iCnt = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
 
    for(iCnt = 1 ; iCnt <= iNo; iCnt++)
    {
    if((iNo % iCnt == 0) && (iCnt % 2 == 0))
    {
            printf("%d ",iCnt);
    }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);
    return 0;
}