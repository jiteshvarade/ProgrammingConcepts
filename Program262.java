import java.util.*;

class BinaryDemo
{
    public boolean ChkBitOnOff(int iNo, int BitPos)
    {
        int iMask = (int)Math.pow(2,BitPos-1);
        if((iNo & iMask) == iMask)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

class Program262
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int Bit = 0;
        boolean bRet = false;
        System.out.print("Enter number : ");
        iNo = sobj.nextInt();

        System.out.print("Enter Bit position : ");
        Bit = sobj.nextInt();

        BinaryDemo bobj = new BinaryDemo();
        bRet = bobj.ChkBitOnOff(iNo, Bit);

        if(bRet == true)
        {
            System.out.println(Bit+" Bit is ON");
        }
        else
        {
            System.out.println(Bit+" Bit is OFF");
        }

        sobj.close();
    }
}