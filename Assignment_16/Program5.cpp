/*
1234
 234
  34
   4
*/

#include<iostream>
using namespace std;

class Pattern
{
    public:

    int iRow;
    int iCol;

    Pattern(int A, int B)
    {
        iRow = A;
        iCol = B;
    }

    void DisplayPattern()
    {
        int i,j;

        for(i = 1 ; i <= iRow ; i++)
        {
            for(j = 1; j <= iCol ; j++)
            {
               if( i == j || j > i)
               {
                cout<<j;
               }
               else 
               {
                cout<<" ";
               }
            }
            cout<<"\n";
        }
    }
};

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    cout<<"Enter the number of rows\n";

    cin>>iValue1;

    cout<<"Enter the number of columns\n";

    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);

    pobj.DisplayPattern();

    return 0;
}