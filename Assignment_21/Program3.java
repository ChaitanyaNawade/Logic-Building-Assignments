//Accept N numbers from the user and return the difference between the smallest element and largets element
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
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public int DisplayDifference()
    {
        int iCnt = 0;
        int iMax = Arr[0];
        int iSmall = Arr[0];

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] > iMax)
            {
                iMax = Arr[iCnt];
            }
            else if(Arr[iCnt] < iSmall)
            {
                iSmall = Arr[iCnt];
            }
        }
        return iMax - iSmall;
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

        iRet = aobj.DisplayDifference();

        System.out.println("The difference between the smallest element and largest element is : "+iRet);

        sobj.close();
    }
}