//Accept the number from the user and print the below pattern
//Input : 5
//Output : A B C D E


#include<stdio.h>

void Pattern(int iNo)
{
    int i = 0;
    char ch = 'A';

    for(i = 0 ; i < iNo ; i++)
    {
        printf("%c ",ch);
        ch++;
    }
}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");

    scanf("%d",&iValue);

    Pattern(iValue);
    
    return 0;
}