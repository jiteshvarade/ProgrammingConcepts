import java.util.*;

class BinaryDemo
{
    public boolean ChkBitOnOff(int iNo, int Bit1Pos, int Bit2Pos)
    {
        int iMask = (int)Math.pow(2,Bit1Pos-1) + (int)Math.pow(2,Bit2Pos-1);
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

class Program264
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

        System.out.print("Enter Bit1 position : ");
        BitPos1 = sobj.nextInt();
        System.out.print("Enter Bit2 position : ");
        BitPos2 = sobj.nextInt();

        BinaryDemo bobj = new BinaryDemo();
        bRet = bobj.ChkBitOnOff(iNo, BitPos1, BitPos2);

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