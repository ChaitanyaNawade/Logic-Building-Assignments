//Accept N numbers from user and check whethe the array contians 11 in  it or not

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

    public int DisplayCount()
    {
        int iCnt = 0;
        int iCount = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt]  == 11)
            {
                iCount++;
            } 
        }
        return iCount;
    }
}

class Program4 
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");

        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept(sobj);

        iRet = aobj.DisplayCount();

        System.out.println("The frequency of 11 is : "+iRet);
        
        sobj.close();
    }
}