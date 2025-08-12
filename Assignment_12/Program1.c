//Accept the number of rows and number of columns from the user and display the below patter

// * * * *
// * * * *
// * * * *
// * * * *


#include<stdio.h> 
void Pattern(int iRow , int iCol)
{
    int i = 0, j = 0;

    for(i = 1 ; i < iRow ; i++)
    {
        for(j = 0 ; j < iCol ; j++)
        {
            printf(" * ");
        }
        printf("\n");
    }
}
int main()
{
    int iValue1 = 0;

    printf("Enter the number of rows\n");

    scanf("%d",&iValue1);

    int iValue2 = 0;

    printf("Enter the number of columns\n");

    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}