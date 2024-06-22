import java.util.*;

class BinaryDemo
{
    public boolean ChkBit(int iNo, int iPos)
    {
        int iResult = 0;
        int iMask = 0x00000001;
        iMask = (iMask << (iPos - 1));  // using left shift operator

        iResult = (iNo & iMask);
        if(iResult == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program282
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iPos = 0;
        boolean bRet = false;

        System.out.print("Enter number : ");
        iNo = sobj.nextInt();
        System.out.print("Enter the position : ");
        iPos = sobj.nextInt();

        BinaryDemo bobj = new BinaryDemo();
        bRet = bobj.ChkBit(iNo, iPos);

        if(bRet == true)
        {
            System.out.println("Bit is ON at given position");
        }
        else
        {
            System.out.println("Bit is OFF at given position");
        }

        sobj.close();
    }
}