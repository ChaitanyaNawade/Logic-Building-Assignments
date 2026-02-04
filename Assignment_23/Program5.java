import java.util.*;


class Demo 
{
    public char ch ;

    public Demo(char ch)
    {
        this.ch = ch;
    }


    public void DisplayValues()
    {
        int Ascii = (int) ch;
        int Octal = 0;
        int iNum = 0;
        int hexadecimal = 0;
        int i  = 1;
        int Rem = 0;
        System.out.println(Ascii);

        while (Ascii != 0)  
        {
            Rem = Ascii % 8;
            Octal = Octal + Rem * i;
            Ascii = Ascii / 8;
            i = i * 10;
        }

        System.out.println("Ocatal = "+Octal);


        for(iCnt = 0 ; iCnt <= 15 ; iCnt++)
        {
        while(Ascii != 0)
        {
            Rem = Ascii % 16;
            hexadecimal = hexadecimal + Rem * i;
            Ascii = Ascii / 16;
            i = i * 10;
        }
        }

        System.out.println("Hexadecimal = "+ hexadecimal);
    }
}
class Program5 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the character whose decimal hexadecimal you want to print");

        char ch = sobj.next().charAt(0);

        Demo dobj  = new Demo(ch);

        dobj.DisplayValues();
    }
}