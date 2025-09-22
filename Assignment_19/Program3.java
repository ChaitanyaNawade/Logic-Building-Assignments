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

    public boolean DisplayCount()
    {
        int iCnt = 0;
        boolean flag = false;
        int iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt]  == 11)
            {
                return true;
            } 
        }
        return flag;
    }
}

class Program3 
{
    public static void main(String A[])
    {
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");

        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept(sobj);

        bRet = aobj.DisplayCount();

        if(bRet == true)
        {
            System.out.println("11 is present");
        }
        else 
        {
            System.out.println("11 is not present");
        }

        sobj.close();
    }
}