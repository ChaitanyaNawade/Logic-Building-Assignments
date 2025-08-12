//Accept the number of rows and columns from the user and print the below pattern

// Input : iRow = 4 , iCol = 4

// Output : A A A A
//          B B B B
//          C C C C
//          D D D D

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;

    char ch = 'A';

    for(i = 1; i <= iRow ; i++)
    {    
        for(j = 1; j <= iCol; j++)
        {
            printf("%c ",ch);  
        }
        ch++; 
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