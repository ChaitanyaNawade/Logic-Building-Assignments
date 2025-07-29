// Input : 7
// Output : 2 4 6 8 10 12 14

#include<stdio.h>
void DisplayEven(int iNo)
{
 int iCnt = 0;

 if(iNo < 0)
  {
    iNo = -iNo;
  }

  for(iCnt = 1; iCnt <= iNo; iCnt++)
  {
      
        printf("%d  ",iCnt*2);
      
  }

}

int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayEven(iValue);

    return 0;
}