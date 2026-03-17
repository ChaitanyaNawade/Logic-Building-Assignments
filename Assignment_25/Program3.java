import java.util.*;

class StringOperation
{
    public char Arr[];

    public StringOperation(char Arr[])
    {
        this.Arr = Arr;
    }

    public void Toggle()
    {
        int i = 0;

        for(i = 0 ; i < Arr.length ; i++)
        {
            if(Arr[i] >= 'a' && Arr[i] <= 'z')
            {
                Arr[i] =(char)(Arr[i] - 32);
            }
            else if(Arr[i] >= 'A' && Arr[i] <= 'Z')
            {
                Arr[i] = (char)(Arr[i] + 32);
            }
        }

        String strnew = new String(Arr);

        System.out.println("The String after toggle is : "+strnew);

    } 


}

class Program3 
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the string");

        String str = sobj.nextLine();

        char Arr[] = str.toCharArray();

        StringOperation stobj = new StringOperation(Arr);
        
        stobj.Toggle();
    }
}