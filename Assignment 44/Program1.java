// write the program which accept the matrix from the user and return the addition of its diagonal elements

import java.util.Scanner;

class Matrix
{
    public int Arr[][];

    public Matrix(int A, int B)
    {
        this.Arr = new int[A][B];
    }

    public void Accept()
    {
        System.out.println("Please enter the elements");

        Scanner sobj = new Scanner(System.in);

        int i= 0,j= 0;


        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                {
                    Arr[i][j] = sobj.nextInt();
                }
            }
        }
    }

    public void Display()
    {
        int i = 0, j = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr[i].length; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }
            System.out.println();
        }
    }

    public int AddDiagonal()
    {
        int i = 0, j= 0 , iSum = 0;

        for(i = 0 ; i < Arr.length ;i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                if(Arr[i] == Arr[j])
                {
                    iSum = iSum + Arr[i][j];
                }
                else
                {
                    System.out.println("matrix doesnt have diagonal");
                    return 0;
                }
            }
        }
        return iSum;
    }
}

public class Program1 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the number of rows");
        int iRow = sobj.nextInt();

        System.out.println("Enter the number of columns");
        int iCol = sobj.nextInt();

        int iRet = 0;

        Matrix mobj = new Matrix(iRow, iCol);
         
        mobj.Accept();

        mobj.Display();

        iRet = mobj.AddDiagonal();

        System.out.println("Addition of diagonal elements is : "+iRet);
        
    }
}
