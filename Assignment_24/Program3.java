// Write a program which accepts a string from the user and returns the difference between the number of capital letters and small letters.

import  java.util.*;

class StringOperation
{
    public String str;

    public StringOperation(String str)
    {
        this.str = str;
    }

    public int CountDifference()
    {
        int iSmall = 0;
        int iCapital = 0 , i = 0;

        if(str.length() == 0)
        {
            return -1;
        }

        for(i = 0 ; i < str.length(); i++)
        {
            char ch = str.charAt(i);

            if(ch >= 'A' && ch <= 'Z')
            {
                iCapital++;
            }
            else if(ch >= 'a' && ch <= 'z')
            {
                iSmall++;
            }
        }
        return iCapital - iSmall;
    }
}

class Program3 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int iRet = 0;

        String str;

        System.out.println("Enter the String");

        str = sobj.nextLine();

        StringOperation ssobj = new StringOperation(str);

        iRet = ssobj.CountDifference();

        if(iRet == -1)
        {
            System.out.println("String is empty");
        }
        else 
        {
            System.out.println("The difference between the capital and small letters is : "+iRet);
        }
    }
}