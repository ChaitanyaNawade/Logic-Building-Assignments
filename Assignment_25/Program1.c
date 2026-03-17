#include<stdio.h>

void strtwlrx(char *str)
{
    char *temp = str;

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str + 32;
        }

        str++;
    }

    printf("The String after tolowercase conversion is : %s",temp);
}

int main()
{
    char Arr[20];

    printf("Enter String\n");

    scanf("%[^'\n']s",&Arr);

    strtwlrx(Arr);

    return 0;
}