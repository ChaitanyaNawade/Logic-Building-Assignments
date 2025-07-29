// Input : 10
// Output : 2 10
#include<stdio.h>
void DisplayEvenFactor(int iNo)
{
   int iCnt = 0;

   for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
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
    printf("Enter number\n");
    scanf("%d",&iValue);

    DisplayEvenFactor(iValue);
    return 0;
}