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
        int i = 0 , j = 0;

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

        for(i = 0 ; i < Arr.length ; i++)
        {
            for(j = 0; j < Arr[i].length ; j++)
            {

            }
        }
    }
}

class Program2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the no of rows :");
        int iRow =  sobj.nextInt();

        System.out.println("Enter the no columns");
        int iCol = sobj.nextInt();

    }
}