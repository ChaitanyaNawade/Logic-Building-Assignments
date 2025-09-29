//Write the program which display the ascii  table 

class Demo
{
    public void DisplayAscii()
    {
        int Hex = 0;
        int iCnt = 0;

        System.out.println("Ascii table Ranging from o to 127");
        for(iCnt = 0 ; iCnt < 128 ; iCnt++)
        { 
            System.out.println(iCnt+" : "+(char)iCnt); 
        }
    }
}


class Program1 
{
    public static void main(String A[])
    {
        Demo dobj = new Demo();
        dobj.DisplayAscii();
    }
}