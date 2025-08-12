//Accept the number of rows and columns from the user and print the below pattern

// Input : iRow = 4 , iCol = 4

// Output : A B C D
//          a b c d
//          A B C D
//          a b c d

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
   
    for(i = 1; i <= iRow ; i++)
    {
        char ch = 'A';
        
         if(i % 2 == 0)
            {
                ch = ch + 32;
            }
            
        for(j = 1; j <= iCol; j++)
        {
            printf("%c ",ch);
            ch++;   
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