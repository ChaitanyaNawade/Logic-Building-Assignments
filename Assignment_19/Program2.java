//Accept N numbers from user and return difference between even numbers and odd numbers

import java.util.Scanner;

class ArrayX 
{
    public int Arr[];

    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept(Scanner sobj)
    {
        int iCnt = 0;

        // Scanner sobj = new Scanner(System.in);

        System.out.println("Enter "+Arr.length+" Elements");

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int DisplayDifference()
    {
        int iCnt = 0;
        int iEvenCount = 0;
        int OddCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iEvenCount++;
            }
            else 
            {
                OddCount++;
            }
        }

        return iEvenCount - OddCount;
    }
}

class Program2 
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");

        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept(sobj);

        iRet = aobj.DisplayDifference();

        System.out.println("The difference between the even numbers and odd numbers is : "+iRet);

        sobj.close();
    }
}