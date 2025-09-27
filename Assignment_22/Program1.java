
//Accept the character from user and check whether it is alphabet or not

import java.util.Scanner;

class Demo 
{
    public char ch;

    public Demo(char ch)
    {
        this.ch = ch;
    }

    public boolean CheckCharacter()
    {
        boolean bFlag = false;
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch<='z'));
        {
            bFlag = true;
        }
        return bFlag;
    }

}

class Program1 
{
    public static void main(String A[])
    {
        boolean bRet = false;

        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter a character to check whether it is alphabet or not");

        char ch = sobj.next().charAt(0);

        Demo dobj = new Demo(ch);

        bRet = dobj.CheckCharacter();

        if(bRet == true)
        {
            System.out.println("it is a alphabet");
        }
        else 
        {
            System.out.println("It is not a alphabet");
        }
    }
}