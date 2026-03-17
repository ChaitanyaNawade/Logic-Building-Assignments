#include<stdio.h>

void DisplayDigit(char *Arr)
{
    while(*Arr != '\0')
    {
        if(*Arr >= '0' &&  * Arr<= '9')
        {
            printf("%c",*Arr);
        }

        *Arr++;
    }

}

int main()
{
    char Arr[20];

    printf("Enter the string \n");

    scanf("%[^\n]s",Arr);

    DisplayDigit(Arr);

    return 0;
}