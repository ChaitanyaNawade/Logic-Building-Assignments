//////////////////////////////////////////////////
///
///File name:   program3.java
///Description: Write the program which Accept Matrix and display the addition of elements  from each column 
///Author :     Chaitanya prakash nawade
///Date   :     31/07/2025
///
//////////////////////////////////////////////////
import java.util.Scanner;

class Matrix
{
    public int Arr[][];  //Original syntax should be int Arr[][] = new Int[][] like this
    

    Matrix(int A,int B)
    {
        Arr = new int[A][B]; 
    } 


    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        int i = 0 , j = 0;

        System.out.println("enter the elements in array");

        for(i = 0 ; i < Arr.length; i++)
        {
            for(j = 0 ; j < Arr[i].length ; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0 , j = 0;

        System.out.println("elements are :");
        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0; j < Arr[i].length ; j++)
            {
                System.out.print(Arr[i][j]+" ");
            }
            System.out.println();
        }
    }

    public int Summation()
    {
        int i = 0 , j =0, iSum1 = 0;

        for( i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0 ; j < Arr.length ; j++)
            {
                if(j == 0)
                {
                    iSum = iSum + Arr[i][j];
                }
            }
        }

        return iSum;

    }
}

class Program4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);
        int iRet = 0;

        System.out.println("Enter the no of rows :");
        int iRow =  sobj.nextInt();

        System.out.println("Enter the no columns");
        int iCol = sobj.nextInt();

        Matrix mobj = new Matrix(iRow, iCol);

        mobj.Accept();
        mobj.Display();
        iRet = mobj.Summation();

        System.out.println("Summation of first columns  is : "+iRet);
    }
}