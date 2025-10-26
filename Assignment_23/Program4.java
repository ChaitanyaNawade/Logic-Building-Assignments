import java.util.*;

class Demo 
{
    public char ch ;

    public Demo(char ch)
    {
        this.ch = ch ;
    }


    public boolean CheckCharacter()
    {
        boolean bFlag = false;

        if(ch < 'A' || ch > 'Z' && ch < 'a' || ch > 'z' && ch < 0 || ch > 9 )
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

        System.out.println("Enter the character which you want to check it is special symbol or not");

        char ch = sobj.next().charAt(0);

        Demo dobj = new Demo(ch);

        bRet = dobj.CheckCharacter();

        if(bRet == true)
        {
            System.out.println(ch+" is a special character ");
        }
        else 
        {
            System.out.println(ch+" is not a special character ");
        }
        
    }
}