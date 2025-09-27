// Accept  the number from user and check whethter it is digit or not 

import java.util.Scanner;

class Demo
{
    public int iNo;

    public Demo(int no)
    {
        this.iNo = no;
    }

    public boolean CheckDigit()
    {
        boolean bFlag = false;

        if(iNo >= 0 && iNo <= 9)
        {
            bFlag = true;
        }
            
        return bFlag;  
    }
}

class Program3
{
    public static void main(String A[])
    {
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter your input");

        int no = sobj.nextInt();

        Demo dobj = new Demo(no);

        bRet = dobj.CheckDigit();

        if(bRet == true)
        {
            System.out.println("The Number is digit");
        }
        else 
        {
            System.out.println("The number is not digit");
        }
    }
}