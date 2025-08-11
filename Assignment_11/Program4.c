// Write a Program which accept the number from the user and display below pattern
// Input : 4
// Output : # 1 * # 2 * # 3 * # 4 * 
#include<stdio.h>


void Pattern(int iNo)
{
    int i = 0;
     
    printf("%s ","#");
    for(i = 1 ; i <= iNo ; i++)
    {
        printf("%d ",i);
        if(i >= 1 && i< 4)
        {
            printf("%s %s ","*","#");
        }
    }
    printf("%s ","*");
}


int main()
{
    int iValue = 0;

    printf("Enter the number\n");

    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}