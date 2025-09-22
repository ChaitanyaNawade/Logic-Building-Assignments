//Accept the n numbers from the user and also accpet another one number as no and return the last  occurance of the no
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

    public int LastOccurance(int iNum)
    {
        int iCnt = 0, Index = -1;

        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] == iNum)
            {
                 Index = iCnt;
            }
        }

        return Index;
    }
}

class Program3 
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");

        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept(sobj);

        System.out.println("Enter the number which you want to check");

        int iNum = sobj.nextInt();

        iRet = aobj.LastOccurance(iNum);

        if(iRet == -1)
        {
            System.out.println("Number not found in array");
        }
        else 
        {
            System.out.println("last occurance is at : "+iRet);
        }
    }
}