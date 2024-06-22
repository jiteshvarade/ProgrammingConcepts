import java.util.*;

class BinaryDemo
{
    public int OffBit(int iNo)
    {
        int iMask = 0x00020000;
        int iResult = (iNo & iMask);
        if(iResult == iMask) // 18th bit is on
        {
            return (iNo ^ iMask);
        }
        else // 18th Bit is off
        {
            return iNo;
        }
    }
}

class Program276
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iNo = 0;
        int iRet = 0;
        System.out.print("Enter number : ");
        iNo = sobj.nextInt();

        BinaryDemo bobj = new BinaryDemo();
        iRet = bobj.OffBit(iNo);

        System.out.println("Updated number is : "+iRet);

        sobj.close();
    }
}