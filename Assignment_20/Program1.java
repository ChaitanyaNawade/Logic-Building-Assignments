//Accept the n numbers from the user and also accpet another one number as n and check whether the no is present or not
import java.util.*;

class ArrayX
{
    public int Arr[];

    ArrayX(int iSize)
    {
        Arr = new int[iSize];
    }

    public void Accept(Scanner sobj)
    {
        System.out.println("Enter "+Arr.length+" Elements ");

        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public boolean CheckNum(Scanner sobj)
    {
        int iCnt = 0;

        System.out.println("Enter the Number which you want to check");

        int iNum = sobj.nextInt();

        boolean bFlag = false;

        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] == iNum)
            {
                bFlag = true;
            }
        }

        return bFlag;
    }
}

class Program1 
{
    public static void main(String A[])
    {
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");

        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept(sobj);

        bRet = aobj.CheckNum(sobj);

        if(bRet == true)
        {
            System.out.println("Tne no is present");
        }
        else 
        {
            System.out.println("The no is not present");
        }

    }
}