//Accept the input as divison from user and prints there exam timing application should be case insensitive
import java.util.Scanner;

class Demo
{
    public char choice;

    public Demo(char ch)
    {

        if(ch >= 'a' && ch <= 'z')
        {
            ch = (char)(ch -32);
        }
        this.choice = ch;
    }

    public void DisplaySchedule()
    {
        switch (choice) 
        {
            case  'A':
                System.out.println("your exam is at 7 AM");
                break;

            case 'B':
                System.out.println("Your exma at 8:30AM");
                break;
            
            case 'C':
                System.out.println("Your exam is at 9:20AM");
                break;

            case 'D':
                System.out.println("your exam is at 10:30 Am");
                break;
        
            default:
                System.out.println("please enter the correct option");
                break;
        }
    }
}

class Program5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("please enter your division");

        char ch = sobj.next().charAt(0);

        Demo dobj = new Demo(ch);

        dobj.DisplaySchedule();
    }
}