#include<iostream>
#include<cstring>
using namespace std;

class StringOperation
{
    public :

    char Arr[30];

    StringOperation(char str[30])
    {
        strcpy(this->Arr,str);
    }

    int CountWhiteSpace()
    {
        int i = 0;
        int iCount = 0;

        while(Arr[i] != '\0')
        {
            if(Arr[i] == ' ')
            {
                iCount++;
            }

            i++;
        }

        return iCount;
    }
};

int main()
{
    char Arr[30];

    cout<<"Enter the string\n";

    cin.getline(Arr,30);

    StringOperation sobj(Arr);

    int iRet = 0;

    iRet = sobj.CountWhiteSpace();

    cout<<"The coutn of white spaces in the string is : "<<iRet<<endl;

    return 0;
}