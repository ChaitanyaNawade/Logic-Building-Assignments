#include<stdio.h>
typedef int bool;

#define TRUE 1
#define FALSE 0

bool CheckVowel(char ch)
{
   if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
   {
    return TRUE;
   }
   else
   {
    return FALSE;
   }
}



int main()
{
    char cValue = '\0';
    bool bRet = FALSE ;

    printf("Enter character\n");
    scanf("%c",&cValue);

    bRet = CheckVowel(cValue);

    if(bRet == TRUE )
    {
        printf("It is vowel\n");
    }
    else
    {
        printf(("Its not a vowel\n"));
    }
    
    return 0;
}