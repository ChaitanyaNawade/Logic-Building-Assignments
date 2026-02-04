//Write a program which accept the string from user and count the number of capital letters

#include<iostream>

using namespace std;

int CheckCapital(char ch[])
{
    int iCount = 0 , i = 0;

    //Returns if the char array is empty
    
    if(ch[i] == '\0')
    {
        return -1;
    }

    while(ch[i] != '\0')
    {
        if(ch[i] >= 'A' && ch[i] <= 'Z')
        {
            iCount++;
        }
        i++;
    }

    return iCount;
}

int main()
{
    char ch[50];

    int iRet = 0;

    cout<<"Enter the String"<<endl;

    cin.getline(ch,50);

    iRet = CheckCapital(ch);

    if(iRet == -1)
    {
        cout<<"String is Empty"<<endl;
    }
    else 
    {
        cout<<"The Capital letters from the string is :"<<iRet<<endl;
    }
    
    return 0;
}

