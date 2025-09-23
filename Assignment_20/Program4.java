//Accpet N numbers from the user and accept range and prints all elements in that range

import java.util.Scanner;

class ArrayX 
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept(Scanner sobj)
    {
        int iCnt = 0;

        System.out.println("Enter "+Arr.length+" Elements");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void DisplayElements(int iStart, int iEnd)
    {
        int iCnt = 0;

        boolean Found = false;

        System.out.println("Elements in the range "+iStart+" to "+iEnd+" are");
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] >= iStart && Arr[iCnt] <= iEnd)
            {
                System.out.println(Arr[iCnt]);
                Found = true;
            }
        }

        if(!Found)
        {
            System.out.println("No elements found in the array");
        }
    }

}

class Program4 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");

        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);
        
        aobj.Accept(sobj);

        System.out.println("Enter the starting range from where you want to print elements");

        int iStart = sobj.nextInt();

        System.out.println("Enter the ending range till where you want to print the elements");

        int iEnd = sobj.nextInt();

        aobj.DisplayElements(iStart, iEnd);
    }

}