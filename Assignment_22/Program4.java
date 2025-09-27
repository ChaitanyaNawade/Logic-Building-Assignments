// Accept character from user and check whether it is small or not    
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

        if(ch >= 'a' && ch <= 'z')
        {
            bFlag = true;
        }

        return bFlag;
    }
}

class Program4  
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
            System.out.println("The alphabet is small");
        }
        else 
        {
            System.out.println("The alphabet is not small");
        }
    }
}