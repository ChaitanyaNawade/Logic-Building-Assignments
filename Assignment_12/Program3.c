//Accept the number of rows and number of columns from the user and display the below patter

// 5 4 3 2 1
// 5 4 3 2 1
// 5 4 3 2 1

#include<stdio.h>

void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;
    for(i = 1; i <= iRow ; i++)
    {
        for(j = iCol ; j > 0 ; j--)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter the Number or rows\n");

    scanf("%d",&iValue1);

    printf("Enter the Number of columns\n");

    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);
    
    return 0;
}
