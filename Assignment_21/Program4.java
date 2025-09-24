//Accept N numbers from the user and display such a number which has 3 digits in it
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

    public void DisplayElemet()
    {
        int iCnt = 0;
        int iDigit = 0;
        
    
        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            int temp = Arr[iCnt];

            int iCount = 0;
            
            while(temp != 0)
            {
                iDigit = temp % 10;
                iCount++;
                temp = temp / 10;
            }

            if(iCount == 3)
            {
                System.out.println(Arr[iCnt]);
            }
        }
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

        aobj.DisplayElemet();

        sobj.close();
    }
}