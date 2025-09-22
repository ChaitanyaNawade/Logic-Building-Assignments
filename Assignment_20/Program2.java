//Accept the n numbers from the user and also accpet another one number as no and return the first  occurance of the no
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
        System.out.println("Enter "+Arr.length+" Elements");

        int iCnt = 0;

        for(iCnt = 0 ; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int FirstOccurance(int iNum)
    {
        int iCnt = 0, Index = -1;

        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            if(Arr[iCnt] == iNum)
            {
                 Index = iCnt;
                 break;
            }
        }

        return Index;
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

        System.out.println("Enter the number to check : ");

        int iNum = sobj.nextInt();

        iRet = aobj.FirstOccurance(iNum);

        if(iRet == -1)
        {
            System.out.println("Number not found in array");
        }
        else 
        {
            System.out.println("The first occurances of "+iNum+" is at : "+iRet);
        }

       

    }
}