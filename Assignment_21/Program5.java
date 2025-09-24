//Accept N numbers from the user and prints the addition of each digits in number
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

        for(iCnt = 0; iCnt < Arr.length ; iCnt++)
        {
            Arr[iCnt] = sobj.nextInt();
        }
    }

    public void AddDigits()
    {
        int iCnt = 0, iDigit  = 0, Temp =0;

        for(iCnt = 0; iCnt < Arr.length; iCnt++)
        {
            Temp = Arr[iCnt];

            int iSum = 0;

            while(Temp != 0)
            {
                iDigit = Temp % 10;
                iSum = iSum + iDigit;
                Temp = Temp / 10;
            }
            System.out.println("Sum of digits of "+Arr[iCnt]+" is "+iSum);
        }   
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
        
        aobj.AddDigits();
    }
}