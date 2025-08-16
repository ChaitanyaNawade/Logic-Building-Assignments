/*
*   Accept the number of rows and columns from user and print the below pattern 
*   * # # #
*   * * # #
*   * * * #
*   * * * *
*/

import java.util.*;

class Demo
{
    public  int iRow ;
    public  int iCol;
    public int i ;
    public int j;

    public Demo(int A, int B)
    {
        this.iRow = A;
        this.iCol = B;
        this.i = 0;
        this.j = 0;
    }


    public void Pattern()
    {
        for(i = 1 ; i<= iRow ;i++)
        {
            for(j = 1; j <= iCol ; j++)
            {
                if(i > j || i == j)
                {
                    System.out.print("* ");
                }
                else 
                {
                    System.out.print("# ");
                }
            }
            System.out.println();
        }
    }
}

class Program1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");

        int iValue1 = sobj.nextInt();

        System.out.println("Enter the numbr of columns");

        int iValue2 = sobj.nextInt();

        Demo dobj = new Demo(iValue1,iValue2);

        dobj.Pattern();

        // Pattern(iValue1,iValue2);
    }
}