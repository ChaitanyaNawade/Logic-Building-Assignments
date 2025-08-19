/*
 * * * *
 * * *
 * *
 *
*/
#include<iostream>
using namespace std;

class Pattern
{
    public :
    int iRow;
    int iCol;

    Pattern(int A,int B)
    {
        iRow = A;
        iCol = B;
    }

    void DisplayPattern()
    {
        int i,j;
        
        for(i = iRow; i > 0; i--)
        {
            for(j = 1 ; j <= i ; j++)
            {
                cout<<"* ";
            }
            cout<<"\n";
        }
    }
};


int main()
{
    int iValue1, iValue2;

    cout<<"Enter the number of rows\n";

    cin>>iValue1;

    cout<<"Enter the number of columns\n";

    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);

    pobj.DisplayPattern();\

    return 0;
}