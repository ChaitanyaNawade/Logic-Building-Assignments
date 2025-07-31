//////////////////////////////////////////////////
///
///File name:   program3.java
///Description: Write the program which Accept Matrix and return the largest number from both the diagonals  
///Author :     Chaitanya prakash nawade
///Date   :     31/07/2025
///
//////////////////////////////////////////////////


import java.util.Scanner;

class Matrix
{
    int Arr[][];

    public Matrix(int A, int B)
    {
        this.Arr = new int[A][B];
    }


    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int i =  0 , j = 0;

        System.out.println("Enter the elements in the array");

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i  = 0 , j = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }
    }

    public int MaxDiagonal()
    {

        if(Arr.length != Arr[0].length)
        {
            System.out.println("Arry is not a square");
            return -1;
        }

        int i = 0;
        int j = 0;
        int iMax1 = Arr[0][0];
        int iMax2 = Arr[0][Arr.length-1];


        for( i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if(i == j)
                {
                    if(Arr[i][i] > iMax1)
                    {
                        iMax1 = Arr[i][j];
                    }
                }
                else if(i != j)
                {
                    if(Arr[i][i] > iMax2)
                    {
                    iMax2 = Arr[i][j];
                    }
                }
            }
        }
        return iMax1;
    }

}

class Program3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRow = 0;
        int iCol = 0;
        int iRet = 0;

        System.out.println("Enter the size of row");
        iCol = sobj.nextInt();
        
        System.out.println("Enter the size of Columns");
        iRow = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();
        iRet  = mobj.MaxDiagonal();

        System.out.println("The maximum element from the diagonal is : "+iRet);
    }
}