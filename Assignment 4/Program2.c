//Write the program which accept the number from the user and prints it factors in decreasing order
// Input : 12
// Output :6 4 3 2 1
#include<stdio.h>

void DisplayFactor(int iNo)
{
    int iFact = 1;
    int iCnt = 0;

    //We applied filter here which checks if number is negative then it converts the number to the positive
    if(iNo < 0)
    {
       iNo = -iNo;
    }

    //this loop will iterate till the iCnt becomes the zero
    for(iCnt = (iNo/2); iCnt > 0 ; iCnt--)
    {
      if(iNo % iCnt == 0)
      {
        printf(" %d ",iCnt);
      }
    }
}
int main()
{
  int iValue = 0;

  printf("Enter the number :\n");

  scanf("%d",&iValue);

  DisplayFactor(iValue);

  return 0;
}