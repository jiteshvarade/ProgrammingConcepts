import java.util.*;

class BinaryDemo
{
    public int ToggleBit(int iNo)
    {
        int iMask = 0x00000040;
        int iResult = 0;
        iResult = (iNo ^ iMask);
        return iResult;
    }
}

class Program278
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;
        System.out.print("Enter number : ");
        iNo = sobj.nextInt();

        BinaryDemo bobj = new BinaryDemo();
        iRet = bobj.ToggleBit(iNo);

        System.out.println("Updated number is : "+iRet);

        sobj.close();
    }
}