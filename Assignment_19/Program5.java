//Accept N numbers from the user and accept another number as Num and check the frequency of Num in array
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
        int iCnt = 0;

        System.out.println("Enter the "+Arr.length+" elements in the array");

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }
    

    public int CountFrequency()
    {
        int iCount = 0;
        int iCnt =0;
        int iNum = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the no ");
        iNum = sobj.nextInt();

        for(iCnt = 0 ; iCnt < Arr.length; iCnt++)
        {
            if(Arr[iCnt] == iNum)
            {
                iCount++;
            }
        }

        return iCount;
    }
}
class Program5 
{
    public static void main(String A[])
    {
        int iRet = 0;

        Scanner sobj = new Scanner(System.in);

        int iSize = 0;

        System.out.println("Enter the size of array");

        iSize = sobj.nextInt();

        ArrayX aobj = new ArrayX(iSize);

        aobj.Accept(sobj);

        iRet = aobj.CountFrequency();

        System.out.println("The frequency of number from the array is : "+iRet);

        sobj.close();
    }
}