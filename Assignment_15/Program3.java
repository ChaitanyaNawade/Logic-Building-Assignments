/*
 *   @ * * *
 *   * @ * *
 *   * * @ *
 *   * * * @
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
                if(i == j)
                {
                    System.out.print("@ ");
                }
                else 
                {
                    System.out.print("* ");
                }
            }
            System.out.println();
        }
    }
}

class Program3
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
