//Accept the number of rows and columns from the user and print the below pattern

// Input : iRow = 4 , iCol = 4

// Output : 1  2  3   4 
//          5  6  7   8
//          9  10  11  12
//          13 14  15  16

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
    int iNum = 1;
    for(i = 1; i <= iRow ; i++)
    {    
        for(j = 1; j <= iCol; j++)
        {
            printf("%d ",iNum);
            iNum++;  
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number of rows\n");

    scanf("%d",&iValue1);

    printf("Enter the Number of Columns\n");

    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}