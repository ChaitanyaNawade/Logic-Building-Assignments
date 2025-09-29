//Accept the input from the user and if the character is capital then print the its corresponding small 
// and if the character is small then print the character capital

import java.util.*;

class Demo
{
    public void ToSmall(char ch)
    {
        if(ch >= 'A' && ch <= 'Z')
        {
            ch = (char)(ch + 32);
            System.out.println(ch);
        }
        else if(ch >= 'a' && ch <= 'z')
        {
            ch =(char)(ch - 32);
            System.out.println(ch);
        }
    }
}

class Program2 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        Demo dobj = new Demo();

        System.out.println("Enter the character");

        char ch = sobj.next().charAt(0);

        dobj.ToSmall(ch);
    }
}