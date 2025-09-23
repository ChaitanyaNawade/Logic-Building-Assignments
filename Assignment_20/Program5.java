//Accept N numbers fromt the usee and return the product of all odd numbers

import java.util.*;

class ArrayX 
{
    public int Arr[];

    public ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }


    public void Accept(Scanner sobj)
    {
        System.out.println("Enter "+Arr.length+" Elements in the array");

        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr.length; iCnt++)
        {
            System.out.println("Enter "+(iCnt+1)+" Element");

            Arr[iCnt] = sobj.nextInt();
        }
    }


    public int DisplayOddProduct()
    {
        int OddProduct = 1;

        boolean Found = false;

        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] % 2 != 0)
            {
                OddProduct = OddProduct * Arr[iCnt];
                Found = true;
            }
        }

        if(!Found)
        {
            return 0;
        }

        return OddProduct;
    }
}
class Program5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");

        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept(sobj);

        int iRet = aobj.DisplayOddProduct();

        if(iRet == 0)
        {
            System.out.println("No odd elements found in array");
        }
        else 
        {
            System.out.println("The product of all odd elemetns is : "+iRet);
        }
        
        sobj.close();
    }
}