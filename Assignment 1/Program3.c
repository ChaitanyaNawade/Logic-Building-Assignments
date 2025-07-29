#include<stdio.h>
void Display()
{
    int iCnt = 0;
    iCnt = 5;
    while(iCnt >= 1)
    {
        printf("%d\n",iCnt);
        iCnt--;
    }
    // for(iCnt=1; iCnt<= 5; iCnt++)
    // {
    //     printf("%d\n",iCnt);
    // }
}
int main()
{
    Display();
    return 0;
}