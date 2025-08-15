// Accept the number of rows and columns from the user and print the below pattern
// Input : iRow 4 , iCol = 4
// Output : a b c d
//          1 2 3 4 
//          a b c d
//          1 2 3 4 


#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i  = 0 ,j = 0;

    for(i = 1; i <= iRow ; i++)
    {
        char ch  = 'A';
        for(j = 1 ; j <= iCol ; j++)
        {
            if(i % 2 != 0)
            {
                printf("%c ",ch);
                ch++;
            }
            else if(i % 2 == 0)
            {
               printf("%d ",j);
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