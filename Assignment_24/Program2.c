//Write a program which accept the string from user and count the number of small letters
#include<stdio.h>

int CheckSmall(char *ch)
{
    int iCount = 0;

    if(*ch == '\0')
    {
        return -1;
    }

    while(*ch != '\0')
    {
        if(*ch >= 'a' && *ch <= 'z')
        {
            iCount++;
        }
        ch++;
    }

    return iCount;
}

int main()
{
    char ch[50];

    int iRet = 0;

    printf("Enter the String\n");

    scanf("%[^\n]s",ch);

    iRet = CheckSmall(ch);

    if(iRet == -1)
    {
        printf("The String is empty\n");
    }
    else 
    {
        printf("The Small letters from the string is : %d\n",iRet);
    }
    return 0;
}