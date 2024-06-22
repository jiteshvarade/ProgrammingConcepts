import java.util.*;

class Numbers
{
    private int iNo1;
    private int iNo2;

    public Numbers(int A, int B)
    {
        iNo1 = A;
        iNo2 = B;
    }

    public int Addition()
    {
        return iNo1 + iNo2;
    }
}

class Program240
{
    public static void main(String arg[])
    {
        Scanner sobj = new Scanner(System.in);

        int iValue1 = 0;
        int iValue2 = 0;
        int iRet = 0;

        System.out.println("Enter first number : ");
        iValue1 = sobj.nextInt();
        System.out.println("Enter second number : ");
        iValue2 = sobj.nextInt();

        Numbers nobj = new Numbers(iValue1, iValue2);
        iRet = nobj.Addition();

        System.out.println("Addition is : "+iRet);
    }
}