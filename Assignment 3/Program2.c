// Input find the factor of the given number  : 10
// Output  : 1 2 5 10

#include<stdio.h>

int DisplayFactor(int iNo)
{
  
    int iCnt = 1;

    for(iCnt = 1; iCnt <= iNo ; iCnt++)
    {
        if((iNo % iCnt) == 0)
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

    DisplayFactor(iValue);

   
    return 0;
}