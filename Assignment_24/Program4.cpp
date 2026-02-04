// Write a program which accepts a string from the user and checks whether the string contains at least one vowel or not.

#include<iostream>

using namespace std;

class StringOperation
{
    private :

    string str;

    public :

    StringOperation(string s)
    {
        str = s;
    }


    bool CheckVowel()
    {
        int i  = 0;

        bool bFlag = false;

        while(str[i] != '\0')
        {
            if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U' ||
               str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            {
                bFlag = true;
            }

            i++;
        }

        return bFlag;
    }
};

int main()
{
    string str;

    bool bRet = false;

    cout<<"Enter the string"<<endl;

    cin>>str;

    StringOperation sobj(str);

    bRet = sobj.CheckVowel();

    if(bRet == true)
    {
        cout<<"String contains the vowel in it"<<endl;
    }
    else 
    {
        cout<<"String does not contains the vowel in it"<<endl;
    }

    return 0;
}