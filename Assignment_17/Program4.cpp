/*
* * * * * *
*       * *
*     *   *
*   *     *
* *       *
* * * * * *
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
        int n = iRow;
        
        for(i = 1 ; i <= iRow ; i++)     // Rows
        {
            for(j = 1; j <= iCol ; j++)  // Columns
            {
                if(i == 1 || j == 1|| i == iRow || j == iCol || i + j == n+1)
                {
                    cout<<"* ";
                }
                else if(i  == j)
                {
                    cout<<"# ";
                }
                else if(i > j || i == j)
                {
                    cout<<"$ ";
                }
            }
            cout<<"\n";
        }
    }
};

int main()
{
    int iValue1 = 0 , iValue2 = 0;

    cout<<"Enter the number of rows: ";

    cin>>iValue1;

    cout<<"Enter the number of columns: ";

    cin>>iValue2;

    Pattern pobj(iValue1,iValue2);

    pobj.DisplayPattern();

    return 0;
}
