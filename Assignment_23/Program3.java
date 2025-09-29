//3. Accept character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly

import java.util.*;

class Demo 
{
    public char ch;

    public Demo(char ch)
    {
        this.ch = ch;
    }

    public void Display()
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            for(char c = ch ; c <= 'Z'; c++)
            {
                System.out.println(c);
            }
        }
        else if(ch >= 'a' &&  ch <= 'z')
        {
            for(char c = ch ; c >= 'a' ;c--)
            {
                System.out.println(c);
            }
        }
    } 
    
}

class Program3 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character");

        char ch = sobj.next().charAt(0);

        Demo dobj = new Demo(ch);

        dobj.Display();

        sobj.close();
    }
}