//Accept N Numbers from the user and return smallest element from the array
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
        int iCnt = 0;

        System.out.println("Enter "+Arr.length+" Elements");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }


    public int DisplayLargest()
    {
        int iCnt = 0;

        int iSmall = Arr[0];

        for(iCnt = 0 ; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] < iSmall)
            {
                iSmall = Arr[iCnt];
            }
        }

        return iSmall;
    }


}

class Program2 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the size of array");

        int iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept(sobj);

        int iRet = aobj.DisplayLargest();

        System.out.println("The smallest element int the  array is : "+iRet);

        sobj.close();
    }
}
