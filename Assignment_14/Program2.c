// Accept the number of rows and columns from the user and print the below pattern
// Input : iRow 4 , iCol = 4
// Output : 2 4 6 8
//          1 3 5 7
//          2 4 6 8 
//          1 3 5 7


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i  = 0 ,j = 0;

    for(i = 1; i <= iRow ; i++)
    {
        for(j = 1 ; j <= iCol ; j++)
        {
            if(i % 2 != 0)
            {
                printf("%d ",j * 2);
            }
            else if(i % 2 == 0)
            {
               printf("%d ",(j*2)-1);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the Number of rows\n");

    scanf("%d",&iValue1);

    printf("Enter the Number of columns\n");

    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}