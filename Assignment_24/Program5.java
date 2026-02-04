// Write a program which accepts a string from the user and returns the reversed string.

import java.util.*;

class StringOperation
{
    public String str;

    public StringOperation(String str)
    {
        this.str = str;
    }

    public String ReverseString()
    {
        char arr[] = str.toCharArray();

        char temp;
        int Start = 0;
        int End = str.length() - 1;

        
        while(Start < End)
        {
            temp = arr[Start];
            arr[Start] = arr[End];
            arr[End] = temp;
            Start++;
            End--;
        }

        return new String(arr);
    }
}

class Program5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        String sRet;

        System.out.println("Enter the string");

        String str =  sobj.nextLine();
        
        StringOperation ssobj = new StringOperation(str);

        sRet = ssobj.ReverseString();

        System.out.println("The string after reversal is : "+sRet);

    }
}