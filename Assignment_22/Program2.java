// Accept character from user and check whether it is capital or not    
import java.util.Scanner;

class Demo
{
    public char ch;

    public Demo(char ch)
    {
        this.ch = ch;
    }

    public boolean CheckCapital()
    {
        boolean bFlag = false;

        if(ch >= 'A' && ch <= 'Z')
        {
            bFlag = true;
        }

        return bFlag;
    }
}

class Program2
{
    public static void main(String A[])
    {
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character which you want to check");

        char ch = sobj.next().charAt(0);

        Demo dobj = new Demo(ch);

        bRet = dobj.CheckCapital();

        if(bRet == true)
        {
            System.out.println("The alphabet is capital");
        }
        else 
        {
            System.out.println("The alphabet is not Capital");
        }
    }
}