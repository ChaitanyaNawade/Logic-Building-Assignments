//Accept N Numbers from the user and return the frequency of even numbers

import java.util.*;

class ArrayX 
{
    public int Arr[];


    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);
        
        int iCnt = 0;

        System.out.println("Enter "+Arr.length+" Elements");

        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int CountEvenElement()
    {
        int iCount = 0;
        int iCnt = 0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] % 2 == 0)
            {
                iCount++;
            }
        }
        return iCount;
    }
}

class Program1 
{
    public static void main(String A[])
    {
        int iRet = 0;
        System.out.println("Enter the size of array");

        Scanner sobj = new Scanner(System.in);

        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept();

        iRet = aobj.CountEvenElement();

        System.out.println("The even elements from the array are "+iRet);
    }
}