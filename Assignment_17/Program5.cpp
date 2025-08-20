/*
1 2 3 4 5
1 2     5
1   3   5
1     4 5
1 2 3 4 5
*/
#include<iostream>
using namespace std;

class Pattern
{
    public :
    int iRow;
    int iCol;

    Pattern(int A, int B)
    {
        iRow = A;
        iCol = B;
    }

    void DisplayPattern()
    {
        int i , j;

        for(i = 1; i <= iRow ; i++) // For Rows 
        {
            for(j = 1; j <= iCol ; j++) // For Columns
            {
                if(i == 1 || j == 1|| i == iRow || j == iCol || i == j)
                {
                    cout<<j<<" ";
                }
                else 
                {
                    cout<<"  ";
                }
            }
            cout<<"\n";
        }
    }
};

int main()
{
    int iValue1 = 0 ,iValue2 = 0;

    cout<<"Enter the Numbers of rows :\n";

    cin>>iValue1;

    cout<<"Enter the Number of columns :\n";

    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);

    pobj.DisplayPattern();

    return 0;
}