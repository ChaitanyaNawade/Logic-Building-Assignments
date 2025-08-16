/*
 *   1 2 3 4
 *   1 * * 4
 *   1 * * 4
 *   1 2 3 4
 */

import java.util.*;

class Demo
{
    public int iRow;
    public int iCol;

    public Demo(int A,int B)
    {
        this.iRow = A;
        this.iCol = B;
    }

    public void Pattern()
    {
        int i,j;

        for(i = 1; i <= iRow; i++)
        {
            for(j = 1; j <= iCol; j++)
            {
                if(j == 1 || i ==1 || i == iRow || j == iCol)
                {
                    System.out.print(" "+j+" ");
                }
                else 
                {
                    System.out.print(" * ");
                }
            }
            System.out.println();
        }
    }
}

class Program5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number or rows");

        int iValue1 = sobj.nextInt();

        System.out.println("Enter the number of columns");

        int iValue2 = sobj.nextInt();

        Demo dobj = new Demo(iValue1, iValue2);

        dobj.Pattern();

    }
}
