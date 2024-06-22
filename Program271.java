import java.util.*;

class BinaryDemo
{
    public boolean ChkBitOnOff(int iNo)
    {
        int iMask = 0x00000A00;
        int iResult = (iNo & iMask);
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

class Program271
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int BitPos1 = 0;
        int BitPos2 = 0;
        boolean bRet = false;
        System.out.print("Enter number : ");
        iNo = sobj.nextInt();

        BinaryDemo bobj = new BinaryDemo();
        bRet = bobj.ChkBitOnOff(iNo);

        if(bRet == true)
        {
            System.out.println("Bits are ON");
        }
        else
        {
            System.out.println("Bits are OFF");
        }

        sobj.close();
    }
}