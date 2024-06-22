import java.util.*;

class BinaryDemo
{
    public int ToggleBit(int iNo, int iPos)
    {
        int iResult = 0;
        int iMask = 0x00000001;
        iMask = (iMask << (iPos - 1));  // using left shift operator
        iResult = (iNo ^ iMask);
        return iResult;
    }
}

class Program280
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iPos = 0;
        int iRet = 0;

        System.out.print("Enter number : ");
        iNo = sobj.nextInt();
        System.out.print("Enter the position : ");
        iPos = sobj.nextInt();

        BinaryDemo bobj = new BinaryDemo();
        iRet = bobj.ToggleBit(iNo, iPos);

        System.out.println("Updated number is : "+iRet);

        sobj.close();
    }
}